#ifndef SRC_COMPOSITE_ENTRY_HPP_
#define SRC_COMPOSITE_ENTRY_HPP_

#include <string>
#include <sstream>
#include "FileTreatmentException.hpp"

class Entry
{
public:
  virtual std::string getName() = 0;
  virtual int getSize() = 0;
  virtual Entry *add(Entry *entry);
  void printList();
  std::string toString();
  virtual void printList(const std::string &prefix) = 0;
};

#endif // SRC_COMPOSITE_ENTRY_HPP_