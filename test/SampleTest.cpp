#include <gtest/gtest.h>
#include "../src/TestObject/TestTargetSample.h"

class SampleTest : public ::testing::Test {
 protected:
  SampleTest() {
    target = new TestTargetSample();
  }

  virtual ~SampleTest() {
    delete target;
  }

  TestTargetSample* target;
};

TEST_F(SampleTest, TargetFunctionTrueTest) {
  ASSERT_TRUE(target->targetFunction(true));
}

TEST_F(SampleTest, TargetFunctionFalseTest) {
  ASSERT_FALSE(target->targetFunction(false));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}