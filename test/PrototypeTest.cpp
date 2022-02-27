#include <gtest/gtest.h>
#include <iostream>
#include <string>
#include "../src/Prototype/MessageBox.h"
#include "../src/Prototype/UnderlinePen.h"
#include "../src/Prototype/framework/Manager.h"
#include "../src/Prototype/framework/Product.h"

using framework::Manager;
using framework::Product;

TEST(PrototypeTest, RegisterProductTest) {
  Manager *manager = new Manager();
  UnderlinePen *uPen = new UnderlinePen('~');
  MessageBox *wBox = new MessageBox('*');
  MessageBox *sBox = new MessageBox('/');
  manager->registerProduct("strong message", uPen);
  manager->registerProduct("warning box", wBox);
  manager->registerProduct("slash box", sBox);

  Product *p1 = manager->create("strong message");
  ASSERT_NE(uPen, p1);
  UnderlinePen *castUPen = dynamic_cast<UnderlinePen*>(p1);
  ASSERT_NE(&castUPen, nullptr);

  Product *p2 = manager->create("warning box");
  ASSERT_NE(wBox, p2);
  MessageBox *castWBox = dynamic_cast<MessageBox*>(p2);
  ASSERT_NE(&castWBox, nullptr);

  Product *p3 = manager->create("slash box");
  ASSERT_NE(sBox, p3);
  MessageBox *castSBox = dynamic_cast<MessageBox*>(p3);
  ASSERT_NE(&castSBox, nullptr);

  testing::internal::CaptureStdout();
  p1->use("test");
  std::string output1 = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output1,
    "\"test\"\n"
    " ~~~~ \n");

  testing::internal::CaptureStdout();
  p2->use("test");
  std::string output2 = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output2,
    "********\n"
    "* test *\n"
    "********\n");

  testing::internal::CaptureStdout();
  p3->use("test");
  std::string output3 = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output3,
    "////////\n"
    "/ test /\n"
    "////////\n");

  p1->use("test");
  p2->use("test");
  p3->use("test");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
