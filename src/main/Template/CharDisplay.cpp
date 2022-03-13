#include "CharDisplay.h"

void CharDisplay::open() {
  std::cout << "<<";
}

void CharDisplay::print() {
  std::cout << this->ch;
}

void CharDisplay::close() {
  std::cout << ">>";
}
