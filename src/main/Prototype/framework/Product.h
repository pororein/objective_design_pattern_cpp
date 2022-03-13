#ifndef SRC_PROTOTYPE_FRAMEWORK_PRODUCT_H_
#define SRC_PROTOTYPE_FRAMEWORK_PRODUCT_H_

#include <string>
#include <exception>

namespace framework {
class Product {
 public:
  virtual void use(const std::string &s) {
    throw new std::runtime_error("Doesn't override method: Product::use");
  };
  virtual Product *createClone() {
    throw new std::runtime_error("Doesn't override method: Product::createClone");
  };
};
}  // namespace framework

#endif  // SRC_PROTOTYPE_FRAMEWORK_PRODUCT_H_
