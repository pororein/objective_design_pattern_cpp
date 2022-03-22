#include "TableLink.hpp"

std::string tablefactory::TableLink::makeHTML()
{
  return "<td><a href=\"" + this->url + "\">" + this->caption + "</a></td>\n";
}