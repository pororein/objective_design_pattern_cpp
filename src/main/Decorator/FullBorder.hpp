#ifndef SRC_DECORATOR_FULLBORDER_HPP_
#define SRC_DECORATOR_FULLBORDER_HPP_

#include <string>
#include <sstream>
#include "Border.hpp"
#include "Display.hpp"

class FullBorder : public Border
{
public:
  FullBorder(Display *display) : Border(display){};
  int getColumns() override;
  int getRows() override;
  std::string getRowText(int row) override;

private:
  std::string makeLine(char ch, int count);
};

#endif // SRC_DECORATOR_FULLBORDER_HPP_