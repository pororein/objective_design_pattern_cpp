#include "UnderlinePen.h"

using framework::Product;

UnderlinePen::UnderlinePen(char ulChar) {
  this->ulChar = ulChar;
}

void UnderlinePen::use(const std::string &s) {
  size_t length = s.length();

  std::cout << "\"" << s << "\"" << std::endl;
  std::cout << " ";
  for (int i = 0; i < static_cast<int>(length); i++) {
    std::cout << this->ulChar;
  }
  std::cout << " " << std::endl;
}

Product* UnderlinePen::createClone() {
  Product *clone = new UnderlinePen(this->ulChar);
  return clone;
}
