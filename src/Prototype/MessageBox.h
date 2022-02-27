#ifndef SRC_PROTOTYPE_MESSAGEBOX_H_
#define SRC_PROTOTYPE_MESSAGEBOX_H_

#include <string>
#include <iostream>
#include "framework/Product.h"

using framework::Product;

class MessageBox: public Product {
 private:
  char decoChar;
 public:
  explicit MessageBox(char decoChar);
  void use(const std::string &s) override;
  Product* createClone() override;
};

#endif  // SRC_PROTOTYPE_MESSAGEBOX_H_
