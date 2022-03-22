#include "ListTray.hpp"

std::string listfactory::ListTray::makeHTML()
{
  std::stringstream buffer;
  buffer << "<li>\n"
         << this->caption << "\n";
  buffer << "<ul>\n";
  for (Item *item : this->tray)
  {
    buffer << item->makeHTML();
  }
  buffer << "</ul>\n"
         << "</li>\n";
  return buffer.str();
}