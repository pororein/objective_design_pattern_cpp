#ifndef SRC_DECORATOR_STRINGDISPLAY_HPP_
#define SRC_DECORATOR_STRINGDISPLAY_HPP_

#include <string>
#include <cstdlib>
#include "Display.hpp"

class StringDisplay : public Display
{
private:
  std::string str;

public:
  StringDisplay(const std::string &str)
  {
    this->str = str;
  };
  int getColumns() override;
  int getRows() override;
  std::string getRowText(int row) override;
};

#endif // SRC_DECORATOR_STRINGDISPLAY_HPP_