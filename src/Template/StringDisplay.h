#ifndef SRC_TEMPLATE_STRINGDISPLAY_H_
#define SRC_TEMPLATE_STRINGDISPLAY_H_

#include <iostream>
#include <string>
#include "AbstractDisplay.h"

class StringDisplay: public AbstractDisplay {
 public:
  explicit StringDisplay(const std::string &string) {
    this->string = string;
    this->width = string.length();
  }
  void open() override;
  void print() override;
  void close() override;

 private:
  std::string string;
  size_t width;
  void printLine();
};

#endif  // SRC_TEMPLATE_STRINGDISPLAY_H_
