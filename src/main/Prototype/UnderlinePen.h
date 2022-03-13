#ifndef SRC_PROTOTYPE_UNDERLINEPEN_H_
#define SRC_PROTOTYPE_UNDERLINEPEN_H_

#include <iostream>
#include <string>
#include "framework/Product.h"

using framework::Product;

class UnderlinePen: public Product {
 private:
  char ulChar;

 public:
  UnderlinePen(char ulChar);
  void use(const std::string &s) override;
  Product* createClone() override;
};

#endif  // SRC_PROTOTYPE_UNDERLINEPEN_H_
