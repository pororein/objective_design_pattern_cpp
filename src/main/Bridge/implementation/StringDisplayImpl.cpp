#include "StringDisplayImpl.hpp"

using namespace implementation;

void StringDisplayImpl::rawOpen()
{
  StringDisplayImpl::printLine();
}

void StringDisplayImpl::rawPrint()
{
  std::cout << "|" << this->str << "|\n";
}

void StringDisplayImpl::rawClose()
{
  StringDisplayImpl::printLine();
}

void StringDisplayImpl::printLine()
{
  std::cout << "+";
  for (int i = 0; i < this->width; i++)
  {
    std::cout << "-";
  }
  std::cout << "+\n";
}