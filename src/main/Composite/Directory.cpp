#include "Directory.hpp"

std::string Directory::getName()
{
  return name;
}

int Directory::getSize()
{
  int size = 0;
  for (Entry *entry : directory)
  {
    size += entry->getSize();
  }
  return size;
}

Entry *Directory::add(Entry *entry)
{
  directory.push_back(entry);
  return this;
}

void Directory::printList(const std::string &prefix)
{
  std::cout << prefix << "/" << this->toString();
  for (Entry *entry : directory)
  {
    entry->printList(prefix + "/" + name);
  }
}
