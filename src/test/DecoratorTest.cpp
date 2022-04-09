#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "../main/Decorator/Display.hpp"
#include "../main/Decorator/StringDisplay.hpp"
#include "../main/Decorator/SideBorder.hpp"
#include "../main/Decorator/FullBorder.hpp"

TEST(DecoratorTest, stringDisplayTest)
{
  Display *display = new StringDisplay("Hello world.");
  testing::internal::CaptureStdout();
  display->show();
  std::string out = testing::internal::GetCapturedStdout();
  ASSERT_EQ(out, "Hello world.\n");
}

TEST(DecoratorTest, sideBorderTest)
{
  Display *display = new StringDisplay("Hello world.");
  Display *sideBorder = new SideBorder(display, '#');
  testing::internal::CaptureStdout();
  sideBorder->show();
  std::string out = testing::internal::GetCapturedStdout();
  ASSERT_EQ(out, "#Hello world.#\n");
}

TEST(DecoratorTest, fullBorderTest)
{
  Display *display = new StringDisplay("Hello world.");
  Display *sideBorder = new SideBorder(display, '#');
  Display *fullBorder = new FullBorder(sideBorder);
  testing::internal::CaptureStdout();
  fullBorder->show();
  std::string out = testing::internal::GetCapturedStdout();
  ASSERT_EQ(out,
            "+--------------+\n"
            "|#Hello world.#|\n"
            "+--------------+\n");
}

TEST(DecoratorTest, compositeBorderTest)
{
  Display *display = new SideBorder(
      new FullBorder(
          new FullBorder(
              new SideBorder(
                  new FullBorder(
                      new StringDisplay("Hello World")),
                  '*'))),
      '/');
  testing::internal::CaptureStdout();
  display->show();
  std::string out = testing::internal::GetCapturedStdout();
  ASSERT_EQ(out,
            "/+-----------------+/\n"
            "/|+---------------+|/\n"
            "/||*+-----------+*||/\n"
            "/||*|Hello World|*||/\n"
            "/||*+-----------+*||/\n"
            "/|+---------------+|/\n"
            "/+-----------------+/\n");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}