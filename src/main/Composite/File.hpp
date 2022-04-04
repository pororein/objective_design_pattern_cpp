#ifndef SRC_COMPOSITE_File_HPP_
#define SRC_COMPOSITE_File_HPP_

#include <string>
#include <iostream>
#include "Entry.hpp"

class File : public Entry
{
private:
  std::string name;
  int size;

public:
  explicit File(const std::string &name, int size)
  {
    this->name = name;
    this->size = size;
  };
  std::string getName() override;
  int getSize() override;

protected:
  void printList(const std::string &prefix) override;
};

#endif // SRC_COMPOSITE_File_HPP_