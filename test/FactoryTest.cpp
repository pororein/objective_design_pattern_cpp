#include <gtest/gtest.h>
#include <iostream>
#include <vector>
#include <string>
#include "../src/Factory/idcard/IDCardFactory.h"
#include "../src/Factory/idcard/IDCard.h"
#include "../src/Factory/framework/Product.h"
#include "../src/Factory/framework/Factory.h"

class FactoryTest : public ::testing::Test {
 protected:
  FactoryTest() {
    this->factory = new idcard::IDCardFactory();
    idcard::IDCardFactory* factoryInstance =
      static_cast<idcard::IDCardFactory*>(this->factory);
    this->target1 =
      factoryInstance->create("name A");
    this->target2 =
      factoryInstance->create("name B");
    this->target3 =
      factoryInstance->create("name C");
  }

  framework::Factory* factory;
  framework::Product* target1;
  framework::Product* target2;
  framework::Product* target3;
};

TEST_F(FactoryTest, IDCardUseTest) {
  idcard::IDCard* idCard1 =
    static_cast<idcard::IDCard*>(this->target1);
  idcard::IDCard* idCard2 =
    static_cast<idcard::IDCard*>(this->target2);
  idcard::IDCard* idCard3 =
    static_cast<idcard::IDCard*>(this->target3);

  testing::internal::CaptureStdout();
  idCard1->use();
  std::string output1 = testing::internal::GetCapturedStdout();
  testing::internal::CaptureStdout();
  idCard2->use();
  std::string output2 = testing::internal::GetCapturedStdout();
  testing::internal::CaptureStdout();
  idCard3->use();
  std::string output3 = testing::internal::GetCapturedStdout();
  ASSERT_EQ(output1, "name A Card Used\n");
  ASSERT_EQ(output2, "name B Card Used\n");
  ASSERT_EQ(output3, "name C Card Used\n");
}

TEST_F(FactoryTest, GetOwnersTest) {
  std::vector<std::string>* owners =
    dynamic_cast<idcard::IDCardFactory *>(factory)->getOwners();
  ASSERT_EQ((*owners)[0], "name A");
  ASSERT_EQ((*owners)[1], "name B");
  ASSERT_EQ((*owners)[2], "name C");
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
