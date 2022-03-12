#include "TextBuilder.h"

void TextBuilder::makeTitle(const std::string &title)
{
  buffer += u8"=====================================\n";
  buffer += u8"『" + title + u8"』\n";
  buffer += u8"\n";
}

void TextBuilder::makeString(const std::string &str)
{
  buffer += u8"■" + str + u8"\n";
  buffer += u8"\n";
}
void TextBuilder::makeItems(const std::vector<std::string> &items)
{
  for (std::string item : items)
  {
    buffer += u8"  ・" + item + "\n";
  }
  buffer += u8"\n";
}

void TextBuilder::close()
{
  buffer += u8"=====================================\n";
}

std::string TextBuilder::getResult()
{
  return buffer;
}