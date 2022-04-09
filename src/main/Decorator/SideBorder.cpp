#include "SideBorder.hpp"

int SideBorder::getColumns()
{
  return 1 + this->display->getColumns() + 1;
}

int SideBorder::getRows()
{
  return this->display->getRows();
}

std::string SideBorder::getRowText(int row)
{
  return borderChar + display->getRowText(row) + borderChar;
}