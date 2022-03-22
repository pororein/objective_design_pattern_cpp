#include "ListLink.hpp"

std::string listfactory::ListLink::makeHTML()
{
  return "  <li><a href=\"" + this->url + "\">" + this->caption + "</a></li>\n";
}
