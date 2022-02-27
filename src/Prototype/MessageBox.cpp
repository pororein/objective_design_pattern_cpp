#include "MessageBox.h"

using framework::Product;

MessageBox::MessageBox(char decoChar) {
  this->decoChar = decoChar;
}

void MessageBox::use(const std::string &s) {
  size_t length = s.length();

  for (int i = 0; i < static_cast<int>(length) + 4; i++) {
    std::cout << this->decoChar;
  }
  std::cout << std::endl;
  
  std::cout << this->decoChar << ' ' << s << ' ' << this->decoChar << std::endl;

  for (int i = 0; i < static_cast<int>(length) + 4; i++) {
    std::cout << this->decoChar;
  }
  std::cout << std::endl;
}

Product* MessageBox::createClone() {
  Product *clone = new MessageBox(this->decoChar);
  return clone;
}
