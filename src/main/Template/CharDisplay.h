#ifndef SRC_TEMPLATE_CHARDISPLAY_H_
#define SRC_TEMPLATE_CHARDISPLAY_H_

#include <iostream>
#include "AbstractDisplay.h"

class CharDisplay: public AbstractDisplay {
 public:
  explicit CharDisplay(const char &ch) {
    this->ch = ch;
  }
  void open() override;
  void print() override;
  void close() override;

 private:
  char ch;
};

#endif  // SRC_TEMPLATE_CHARDISPLAY_H_
