#include "ListFactory.hpp"

factory::Link *listfactory::ListFactory::createLink(const std::string &caption, const std::string &url)
{
  return new listfactory::ListLink(caption, url);
}

factory::Tray *listfactory::ListFactory::createTray(const std::string &caption)
{
  return new listfactory::ListTray(caption);
}

factory::Page *listfactory::ListFactory::createPage(const std::string &title, const std::string &author)
{
  return new listfactory::ListPage(title, author);
}