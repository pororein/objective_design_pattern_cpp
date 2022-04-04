#include "File.hpp"

std::string File::getName()
{
  return this->name;
}

int File::getSize()
{
  return this->size;
}

void File::printList(const std::string &prefix)
{
  std::cout << prefix << "/" << this->toString();
}