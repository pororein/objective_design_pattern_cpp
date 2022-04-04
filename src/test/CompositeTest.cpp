#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "../main/Composite/Directory.hpp"
#include "../main/Composite/File.hpp"

TEST(CompositeTest, directoryTest)
{
  Directory *rootdir = new Directory("root");
  Directory *bindir = new Directory("bin");
  Directory *tmpdir = new Directory("tmp");
  Directory *usr = new Directory("usr");

  rootdir->add(bindir);
  rootdir->add(tmpdir);
  rootdir->add(usr);

  bindir->add(new File("vi", 10000));
  bindir->add(new File("latex", 20000));

  testing::internal::CaptureStdout();
  rootdir->Entry::printList();
  std::string rootdirLs = testing::internal::GetCapturedStdout();
  ASSERT_EQ(rootdirLs,
            "/root (30000)\n"
            "/root/bin (30000)\n"
            "/root/bin/vi (10000)\n"
            "/root/bin/latex (20000)\n"
            "/root/tmp (0)\n"
            "/root/usr (0)\n");

  Directory *yuki = new Directory("yuki");
  Directory *hanako = new Directory("hanako");
  Directory *tomura = new Directory("tomura");

  usr->add(yuki);
  usr->add(hanako);
  usr->add(tomura);

  yuki->add(new File("diary.html", 100));
  yuki->add(new File("composite.java", 200));
  hanako->add(new File("memo.tex", 300));
  tomura->add(new File("game.doc", 400));
  tomura->add(new File("junk.mail", 500));

  testing::internal::CaptureStdout();
  rootdir->Entry::printList();
  std::string rootdirLsAfterCreateUserDir = testing::internal::GetCapturedStdout();
  ASSERT_EQ(rootdirLsAfterCreateUserDir,
            "/root (31500)\n"
            "/root/bin (30000)\n"
            "/root/bin/vi (10000)\n"
            "/root/bin/latex (20000)\n"
            "/root/tmp (0)\n"
            "/root/usr (1500)\n"
            "/root/usr/yuki (300)\n"
            "/root/usr/yuki/diary.html (100)\n"
            "/root/usr/yuki/composite.java (200)\n"
            "/root/usr/hanako (300)\n"
            "/root/usr/hanako/memo.tex (300)\n"
            "/root/usr/tomura (900)\n"
            "/root/usr/tomura/game.doc (400)\n"
            "/root/usr/tomura/junk.mail (500)\n");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}