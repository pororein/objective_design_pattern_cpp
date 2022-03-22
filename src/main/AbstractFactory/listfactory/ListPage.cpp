#include "ListPage.hpp"

std::string listfactory::ListPage::makeHTML()
{
  std::stringstream buffer;
  buffer << "<html><head><title>" << this->title << "</title></head>\n";
  buffer << "<body>\n";
  buffer << "<h1>" << this->title << "</h1>\n";
  buffer << "<ul>\n";
  for (factory::Item *item : this->content)
  {
    buffer << item->makeHTML();
  }
  buffer << "</ul>\n";
  buffer << "<hr><address>" << this->author << "</address>";
  buffer << "</body></html>\n";
  return buffer.str();
}