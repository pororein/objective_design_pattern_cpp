#ifndef SRC_FACTORY_IDCARD_IDCARD_H_
#define SRC_FACTORY_IDCARD_IDCARD_H_

#include <iostream>
#include <string>
#include "../framework/Product.h"

namespace idcard {

class IDCard: public framework::Product {
 public:
  explicit IDCard(const std::string &owner);
  void use() override;
  std::string getOwner();

 private:
  std::string owner;
};

}  // namespace idcard

#endif  // SRC_FACTORY_IDCARD_IDCARD_H_
