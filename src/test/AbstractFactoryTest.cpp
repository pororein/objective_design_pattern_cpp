#include <gtest/gtest.h>
#include <iostream>
#include "../main/AbstractFactory/factory/Factory.hpp"
#include "../main/AbstractFactory/factory/Item.hpp"
#include "../main/AbstractFactory/factory/Link.hpp"
#include "../main/AbstractFactory/factory/Page.hpp"
#include "../main/AbstractFactory/factory/Tray.hpp"
#include "../main/AbstractFactory/listfactory/ListFactory.hpp"
#include "../main/AbstractFactory/tablefactory/TableFactory.hpp"

using namespace factory;
using namespace listfactory;
using namespace tablefactory;

std::string mainScenario(Factory *concrete)
{

  std::cout << "test start!";
  Factory *fc = Factory::getFactory(concrete);
  Link *xxx = fc->createLink("XX新聞", "http://www.XX.com");
  Link *yyy = fc->createLink("OO新聞", "http://www.YY.co.jp");

  Link *us_xxx = fc->createLink("XXXXX", "http://www.XXXXX.com");
  Link *jp_xxx = fc->createLink("XXXXX/Japan", "http://www.XXXXX.co.jp");
  Link *zzz1 = fc->createLink("ZZZ/1", "http://www.ZZZ/1.com");
  Link *zzz2 = fc->createLink("ZZZ/2", "http://www.ZZZ/2.com");

  Tray *tray_news = fc->createTray("新聞");
  tray_news->add(xxx);
  tray_news->add(yyy);

  Tray *tray_xxx = fc->createTray("XXX");
  tray_xxx->add(us_xxx);
  tray_xxx->add(jp_xxx);

  Tray *tray_search_engine = fc->createTray("サーチエンジン");
  tray_search_engine->add(tray_xxx);
  tray_search_engine->add(zzz1);
  tray_search_engine->add(zzz2);

  Page *page = fc->createPage("LinkPage", "pororein");
  page->add(tray_news);
  page->add(tray_search_engine);

  testing::internal::CaptureStdout();
  page->output();
  std::string out = testing::internal::GetCapturedStdout();

  return out;
}

TEST(AbstractFactoryTest, ListFactoryTest)
{
  std::string result = mainScenario(new ListFactory());
  ASSERT_EQ(result,
            u8"<!-- file name: LinkPage -->\n"
            u8"<html><head><title>LinkPage</title></head>\n"
            u8"<body>\n"
            u8"<h1>LinkPage</h1>\n"
            u8"<ul>\n"
            u8"<li>\n"
            u8"新聞\n"
            u8"<ul>\n"
            u8"  <li><a href=\"http://www.XX.com\">XX新聞</a></li>\n"
            u8"  <li><a href=\"http://www.YY.co.jp\">OO新聞</a></li>\n"
            u8"</ul>\n"
            u8"</li>\n"
            u8"<li>\n"
            u8"サーチエンジン\n"
            u8"<ul>\n"
            u8"<li>\n"
            u8"XXX\n"
            u8"<ul>\n"
            u8"  <li><a href=\"http://www.XXXXX.com\">XXXXX</a></li>\n"
            u8"  <li><a href=\"http://www.XXXXX.co.jp\">XXXXX/Japan</a></li>\n"
            u8"</ul>\n"
            u8"</li>\n"
            u8"  <li><a href=\"http://www.ZZZ/1.com\">ZZZ/1</a></li>\n"
            u8"  <li><a href=\"http://www.ZZZ/2.com\">ZZZ/2</a></li>\n"
            u8"</ul>\n"
            u8"</li>\n"
            u8"</ul>\n"
            u8"<hr><address>pororein</address></body></html>\n");
}

TEST(AbstractFactoryTest, TableFactoryTest)
{
  std::string result = mainScenario(new TableFactory());
  ASSERT_EQ(result,
            u8"<!-- file name: LinkPage -->\n"
            u8"<html><head><title>LinkPage</title></head>\n"
            u8"<body>\n"
            u8"<h1>LinkPage</h1>\n"
            u8"<table width=\"80%\" border=\"3\">\n"
            u8"<tr><td><table width=\"100%\" border=\"1\"><tr><td bgcolor=\"#cccccc\" align=\"center\" colspan=\"2\"><b>新聞</b></td></tr>\n"
            u8"<tr>\n"
            u8"<td><a href=\"http://www.XX.com\">XX新聞</a></td>\n"
            u8"<td><a href=\"http://www.YY.co.jp\">OO新聞</a></td>\n"
            u8"</tr></table></td></tr><tr><td><table width=\"100%\" border=\"1\"><tr><td bgcolor=\"#cccccc\" align=\"center\" colspan=\"3\"><b>サーチエンジン</b></td></tr>\n"
            u8"<tr>\n"
            u8"<td><table width=\"100%\" border=\"1\"><tr><td bgcolor=\"#cccccc\" align=\"center\" colspan=\"2\"><b>XXX</b></td></tr>\n"
            u8"<tr>\n"
            u8"<td><a href=\"http://www.XXXXX.com\">XXXXX</a></td>\n"
            u8"<td><a href=\"http://www.XXXXX.co.jp\">XXXXX/Japan</a></td>\n"
            u8"</tr></table></td><td><a href=\"http://www.ZZZ/1.com\">ZZZ/1</a></td>\n"
            u8"<td><a href=\"http://www.ZZZ/2.com\">ZZZ/2</a></td>\n"
            u8"</tr></table></td></tr></table>\n"
            u8"<hr><address>pororein</address></body></html>\n");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
