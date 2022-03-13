#include "Banner.h"

void Banner::showWithParen() {
  std::cout << "(" + this->str + ")" << std::endl;
}

void Banner::showWithAster() {
  std::cout << "*" + this->str + "*" << std::endl;
}
