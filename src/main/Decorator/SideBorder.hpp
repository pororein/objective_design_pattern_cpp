#ifndef SRC_DECORATOR_SIDEBORDER_HPP_
#define SRC_DECORATOR_SIDEBORDER_HPP_

#include <string>
#include <iostream>
#include "Border.hpp"
#include "Display.hpp"

class SideBorder : public Border
{
private:
  char borderChar;

public:
  SideBorder(Display *display, char borderChar) : Border(display)
  {
    this->borderChar = borderChar;
  };
  int getColumns() override;
  int getRows() override;
  std::string getRowText(int row) override;
};

#endif // SRC_DECORATOR_SIDEBORDER_HPP_