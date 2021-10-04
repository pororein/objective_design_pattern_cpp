#include "IDCardFactory.h"

namespace idcard {

std::vector<std::string>* IDCardFactory::getOwners() {
  return &(this->owners);
}

framework::Product* IDCardFactory::createProduct(const std::string &owner) {
  return new IDCard(owner);
}

void IDCardFactory::registerProduct(framework::Product *product) {
  this->owners.push_back(static_cast<IDCard*>(product)->getOwner());
}

}  // namespace idcard
