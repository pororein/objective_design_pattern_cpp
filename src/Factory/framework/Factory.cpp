#include "Factory.h"

namespace framework {

Product* Factory::create(const std::string &owner) {
  Product *p = this->createProduct(owner);
  this->registerProduct(p);
  return p;
}

}  // namespace framework
