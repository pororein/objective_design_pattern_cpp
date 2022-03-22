#include "TableTray.hpp"

std::string tablefactory::TableTray::makeHTML()
{
  std::stringstream buffer;
  buffer << "<td>";
  buffer << "<table width=\"100%\" border=\"1\"><tr>";
  buffer << "<td bgcolor=\"#cccccc\" align=\"center\" colspan=\""
         << this->tray.size() << "\"><b>" << this->caption << "</b></td>";
  buffer << "</tr>\n";
  buffer << "<tr>\n";
  for (factory::Item *item : this->tray)
  {
    buffer << item->makeHTML();
  }
  buffer << "</tr></table>";
  buffer << "</td>";
  return buffer.str();
}