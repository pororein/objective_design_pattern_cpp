#ifndef SRC_FACTORY_FRAMEWORK_FACTORY_H_
#define SRC_FACTORY_FRAMEWORK_FACTORY_H_

#include <string>
#include "Product.h"

namespace framework {

class Factory {
 public:
  Product* create(const std::string &owner);
 protected:
  virtual Product* createProduct(const std::string &owner)
    {return nullptr;}
  virtual void registerProduct(Product *product) {}
};
}  // namespace framework

#endif  // SRC_FACTORY_FRAMEWORK_FACTORY_H_
