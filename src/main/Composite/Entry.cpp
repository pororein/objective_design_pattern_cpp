#include "Entry.hpp"

Entry *Entry::add(Entry *entry)
{
  throw new FileTreatmentException("未実装のaddが呼び出されました。", 1);
}

void Entry::printList()
{
  this->printList("");
}

std::string Entry::toString()
{
  std::stringstream buffer;
  buffer << this->getName() << " (" << this->getSize() << ")\n";
  return buffer.str();
}