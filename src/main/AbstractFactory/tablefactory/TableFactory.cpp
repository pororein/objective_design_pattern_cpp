#include "TableFactory.hpp"

factory::Link *tablefactory::TableFactory::createLink(const std::string &caption, const std::string &url)
{
  return new tablefactory::TableLink(caption, url);
}

factory::Tray *tablefactory::TableFactory::createTray(const std::string &caption)
{
  return new tablefactory::TableTray(caption);
}

factory::Page *tablefactory::TableFactory::createPage(const std::string &title, const std::string &author)
{
  return new tablefactory::TablePage(title, author);
}