#include "HTMLBuilder.h"

void HTMLBuilder::makeTitle(const std::string &title)
{
  buffer += "<html>\n";
  buffer += "  <head><title>" + title + "</title></head>\n";
  buffer += "  <body>\n";
}

void HTMLBuilder::makeString(const std::string &str)
{
  buffer += "    <p>" + str + "</p>\n";
}

void HTMLBuilder::makeItems(const std::vector<std::string> &items)
{
  buffer += "    <ul>\n";
  for (std::string item : items)
  {
    buffer += "      <li>" + item + "</li>\n";
  }
  buffer += "    </ul>\n";
}

void HTMLBuilder::close()
{
  buffer += "  </body>\n";
  buffer += "</html>\n";
}

std::string HTMLBuilder::getResult()
{
  return buffer;
}