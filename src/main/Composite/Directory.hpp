#ifndef SRC_COMPOSITE_DIRECTORY_HPP_
#define SRC_COMPOSITE_DIRECTORY_HPP_

#include <string>
#include <vector>
#include <iostream>
#include "Entry.hpp"

class Directory : public Entry
{
private:
  std::string name;
  std::vector<Entry *> directory = {};

public:
  explicit Directory(const std::string &name)
  {
    this->name = name;
  };
  std::string getName() override;
  int getSize() override;
  Entry *add(Entry *entry) override;

protected:
  void printList(const std::string &prefix) override;
};

#endif // SRC_COMPOSITE_DIRECTORY_HPP_