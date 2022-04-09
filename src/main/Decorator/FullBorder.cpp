#include "FullBorder.hpp"

int FullBorder::getColumns()
{
  return 1 + this->display->getColumns() + 1;
}

int FullBorder::getRows()
{
  return 1 + this->display->getRows() + 1;
}

std::string FullBorder::getRowText(int row)
{
  if (row == 0 || row == display->getRows() + 1)
  {
    return "+" + makeLine('-', display->getColumns()) + "+";
  }

  return "|" + display->getRowText(row - 1) + "|";
}

std::string FullBorder::makeLine(char ch, int count)
{
  std::stringstream buffer;
  for (int i = 0; i < count; i++)
  {
    buffer << ch;
  }

  return buffer.str();
}