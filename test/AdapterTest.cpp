#include <gtest/gtest.h>
#include <iostream>
#include "../src/Adapter/PrintBanner.h"
#include "../src/Adapter/PrintBannerAssign.h"

class AdapterTest : public ::testing::Test {
 protected:
  PrintBanner *target = new PrintBanner("Hello");
};

class AssignAdapterTest : public ::testing::Test {
 protected:
  PrintBannerAssign *target = new PrintBannerAssign("Hello");
};

TEST_F(AdapterTest, PrintWeakTest) {
  testing::internal::CaptureStdout();
  target->printWeak();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output, "(Hello)\n");
}

TEST_F(AdapterTest, PrintStrongTest) {
  testing::internal::CaptureStdout();
  target->printStrong();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output, "*Hello*\n");
}

TEST_F(AssignAdapterTest, PrintWeakTest) {
  testing::internal::CaptureStdout();
  target->printWeak();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output, "(Hello)\n");
}

TEST_F(AssignAdapterTest, PrintStrongTest) {
  testing::internal::CaptureStdout();
  target->printStrong();
  std::string output = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output, "*Hello*\n");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
