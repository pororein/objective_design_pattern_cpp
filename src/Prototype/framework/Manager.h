#ifndef SRC_PROTOTYPE_FRAMEWORK_H_
#define SRC_PROTOTYPE_FRAMEWORK_H_

#include <map>
#include <string>
#include "Product.h"

namespace framework {
class Manager {
 private:
  std::map<std::string, Product*> showcase;
 public:
  void registerProduct(const std::string &name, Product *proto);
  Product* create(const std::string &protoName);
};
}

#endif  // SRC_PROTOTYPE_FRAMEWORK_H_
