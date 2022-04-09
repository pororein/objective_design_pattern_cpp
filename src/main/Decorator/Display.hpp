#ifndef SRC_DECORATOR_DISPLAY_HPP_
#define SRC_DECORATOR_DISPLAY_HPP_

#include <string>
#include <iostream>

class Display
{
public:
  virtual int getColumns() = 0;
  virtual int getRows() = 0;
  virtual std::string getRowText(int row) = 0;
  const void show();
};

#endif // SRC_DECORATOR_DISPLAY_HPP_