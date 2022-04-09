#include "Display.hpp"

const void Display::show()
{
  for (int i = 0; i < this->getRows(); i++)
  {
    std::cout << this->getRowText(i) << "\n";
  }
}