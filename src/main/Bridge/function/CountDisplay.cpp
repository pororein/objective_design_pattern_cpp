#include "CountDisplay.hpp"

using namespace function;

void CountDisplay::multiDisplay(int times)
{
  this->open();

  for (int i = 0; i < times; i++)
  {
    this->print();
  }

  this->close();
}