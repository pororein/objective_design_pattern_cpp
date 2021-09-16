#include <gtest/gtest.h>
#include <iostream>
#include "../src/Template/AbstractDisplay.h"
#include "../src/Template/CharDisplay.h"
#include "../src/Template/StringDisplay.h"

TEST(TemplateTest, CharDisplayTest) {
  AbstractDisplay* target = new CharDisplay('H');
  testing::internal::CaptureStdout();
  target->display();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output, "<<HHHHH>>");
}

TEST(TemplateTest, StringDisplayTest) {
  AbstractDisplay* target = new StringDisplay("Hello, world.");
  testing::internal::CaptureStdout();
  target->display();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output,
    "+-------------+\n"
    "|Hello, world.|\n"
    "|Hello, world.|\n"
    "|Hello, world.|\n"
    "|Hello, world.|\n"
    "|Hello, world.|\n"
    "+-------------+\n");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
