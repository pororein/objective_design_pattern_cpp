#ifndef SRC_MAIN_ABSTRACTFACTORY_PAGE_HPP
#define SRC_MAIN_ABSTRACTFACTORY_PAGE_HPP

#include <string>
#include <vector>
#include <iostream>
#include "Item.hpp"

namespace factory
{
  class Page
  {
  protected:
    std::string title;
    std::string author;
    std::vector<Item *> content;

  public:
    explicit Page(const std::string &title, const std::string &author)
    {
      this->title = title;
      this->author = author;
    };
    void add(Item *item)
    {
      this->content.push_back(item);
    };
    void output()
    {
      std::string file;
      file = "<!-- file name: " + this->title + " -->\n" + this->makeHTML();
      std::cout << file;
    };
    virtual std::string makeHTML() = 0;
  };
}; // namespace factory

#endif // SRC_MAIN_ABSTRACTFACTORY_PAGE_HPP