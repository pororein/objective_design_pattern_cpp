#include "StringDisplay.h"

void StringDisplay::open() {
  this->printLine();
}

void StringDisplay::print() {
  std::cout << "|" << this->string << "|" << std::endl;
}

void StringDisplay::close() {
  this->printLine();
}

void StringDisplay::printLine() {
  std::cout << "+";
  for (int i = 0; i < static_cast<int>(this->width); i++) {
    std::cout << "-";
  }
  std::cout << "+" << std::endl;
}
