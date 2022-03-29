#include <gtest/gtest.h>
#include <iostream>
#include "../main/Bridge/function/Display.hpp"
#include "../main/Bridge/function/CountDisplay.hpp"
#include "../main/Bridge/implementation/StringDisplayImpl.hpp"

using namespace function;
using namespace implementation;

TEST(BridgeTest, DisplayTest)
{
  testing::internal::CaptureStdout();
  Display *disp = new Display(new StringDisplayImpl("Hello Japan."));
  disp->display();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output,
            "+------------+\n"
            "|Hello Japan.|\n"
            "+------------+\n");
}

TEST(BridgeTest, DisplayDownCastTest)
{
  testing::internal::CaptureStdout();
  Display *disp = new CountDisplay(new StringDisplayImpl("Hello World."));
  disp->display();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output,
            "+------------+\n"
            "|Hello World.|\n"
            "+------------+\n");
}

TEST(BridgeTest, CountDisplayTest)
{
  testing::internal::CaptureStdout();
  CountDisplay *disp = new CountDisplay(new StringDisplayImpl("Hello Universe."));
  disp->display();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output,
            "+---------------+\n"
            "|Hello Universe.|\n"
            "+---------------+\n");
}

TEST(BridgeTest, multiDisplayTest)
{
  testing::internal::CaptureStdout();
  CountDisplay *disp = new CountDisplay(new StringDisplayImpl("Hello Universe."));
  disp->multiDisplay(5);
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output,
            "+---------------+\n"
            "|Hello Universe.|\n"
            "|Hello Universe.|\n"
            "|Hello Universe.|\n"
            "|Hello Universe.|\n"
            "|Hello Universe.|\n"
            "+---------------+\n");
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}