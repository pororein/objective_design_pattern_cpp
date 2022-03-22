#include "TablePage.hpp"

std::string tablefactory::TablePage::makeHTML()
{
  std::stringstream buffer;
  buffer << "<html><head><title>" + this->title + "</title></head>\n";
  buffer << "<body>\n";
  buffer << "<h1>" + this->title + "</h1>\n";
  buffer << "<table width=\"80%\" border=\"3\">\n";
  for (factory::Item *item : this->content)
  {
    buffer << "<tr>" + item->makeHTML() + "</tr>";
  }
  buffer << "</table>\n";
  buffer << "<hr><address>" + this->author + "</address>";
  buffer << "</body></html>\n";
  return buffer.str();
}