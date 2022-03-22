#ifndef SRC_MAIN_ABSTRACTFACTORY_ITEM_HPP
#define SRC_MAIN_ABSTRACTFACTORY_ITEM_HPP

#include <string>

namespace factory
{
  class Item
  {
  protected:
    std::string caption;

  public:
    explicit Item(const std::string &caption)
    {
      this->caption = caption;
    };
    virtual std::string makeHTML() = 0;
  };
}; // namespace factory

#endif // SRC_MAIN_ABSTRACTFACTORY_ITEM_HPP