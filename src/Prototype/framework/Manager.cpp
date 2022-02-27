#include "Manager.h"

namespace framework {

  void Manager::registerProduct(const std::string &name, Product *proto) {
    this->showcase[name] = proto;
  }

  Product* Manager::create(const std::string &protoName) {
    Product *p = static_cast<Product *>(this->showcase.at(protoName));
    return p->createClone();
  }

}  // namespace framework
