#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "../src/Builder/Builder.h"
#include "../src/Builder/Director.h"
#include "../src/Builder/TextBuilder.h"
#include "../src/Builder/HTMLBuilder.h"

template <class T>
std::string mainScenario(T *builder)
{
  Director *director = new Director(builder);
  director->construct();

  testing::internal::CaptureStdout();
  std::cout << builder->getResult();
  std::string out = testing::internal::GetCapturedStdout();
  return out;
}

TEST(BuilderTest, TextBuilderTest)
{
  std::string out = mainScenario(new TextBuilder());
  ASSERT_EQ(out,
            u8"=====================================\n"
            u8"『Greeting』\n"
            u8"\n"
            u8"■朝から昼にかけて\n"
            u8"\n"
            u8"  ・おはようございます。\n"
            u8"  ・こんにちは。\n"
            u8"\n"
            u8"■夜に\n"
            u8"\n"
            u8"  ・こんばんは。\n"
            u8"  ・おやすみなさい。\n"
            u8"  ・さようなら。\n"
            u8"\n"
            u8"=====================================\n");
}

TEST(BuilderTest, HTMLBuilderTest)
{
  std::string out = mainScenario(new HTMLBuilder());
  ASSERT_EQ(out,
            u8"<html>\n"
            u8"  <head><title>Greeting</title></head>\n"
            u8"  <body>\n"
            u8"    <p>朝から昼にかけて</p>\n"
            u8"    <ul>\n"
            u8"      <li>おはようございます。</li>\n"
            u8"      <li>こんにちは。</li>\n"
            u8"    </ul>\n"
            u8"    <p>夜に</p>\n"
            u8"    <ul>\n"
            u8"      <li>こんばんは。</li>\n"
            u8"      <li>おやすみなさい。</li>\n"
            u8"      <li>さようなら。</li>\n"
            u8"    </ul>\n"
            u8"  </body>\n"
            u8"</html>\n");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}