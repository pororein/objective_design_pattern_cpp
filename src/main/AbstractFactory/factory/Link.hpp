#ifndef SRC_MAIN_ABSTRACTFACTORY_LINK_HPP
#define SRC_MAIN_ABSTRACTFACTORY_LINK_HPP

#include <string>
#include "Item.hpp"

namespace factory
{
  class Link : public Item
  {
  protected:
    std::string url;

  public:
    explicit Link(const std::string &caption, const std::string &url) : Item(caption)
    {
      this->url = url;
    };
  };
}; // namespace factory

#endif // SRC_MAIN_ABSTRACTFACTORY_LINK_HPP