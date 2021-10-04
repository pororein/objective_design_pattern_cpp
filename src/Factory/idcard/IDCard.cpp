#include "IDCard.h"

namespace idcard {

IDCard::IDCard(const std::string &owner) {
  this->owner = owner;
  std::cout << this->owner << " Card Created" << std::endl;
}

void IDCard::use() {
  std::cout << this->owner << " Card Used" << std::endl;
}

std::string IDCard::getOwner() {
  return this->owner;
}

}  // namespace idcard
