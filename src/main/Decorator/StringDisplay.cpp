#include "StringDisplay.hpp"

int StringDisplay::getColumns()
{
  return (int)str.length();
}

int StringDisplay::getRows()
{
  return 1;
}

std::string StringDisplay::getRowText(int row)
{
  if (row == 0)
  {
    return this->str;
  }

  return "";
}