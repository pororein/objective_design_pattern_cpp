#include <gtest/gtest.h>
#include "../src/Singleton/Singleton.h"

TEST(SingletonTest, SingletonTest) {
  Singleton *obj1 = Singleton::getInstance();
  Singleton *obj2 = Singleton::getInstance();
  ASSERT_EQ(obj1, obj2);
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
