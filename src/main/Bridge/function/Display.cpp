#include "Display.hpp"

using namespace function;

void Display::open()
{
  this->impl->rawOpen();
}

void Display::print()
{
  this->impl->rawPrint();
}

void Display::close()
{
  this->impl->rawClose();
}

void Display::display()
{
  open();
  print();
  close();
}
