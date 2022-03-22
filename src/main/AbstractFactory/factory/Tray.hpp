#ifndef SRC_MAIN_ABSTRACTFACTORY_TRAY_HPP
#define SRC_MAIN_ABSTRACTFACTORY_TRAY_HPP

#include <string>
#include <vector>
#include "Item.hpp"

namespace factory
{
  class Tray : public Item
  {
  protected:
    std::vector<Item *> tray;

  public:
    explicit Tray(const std::string &caption) : Item(caption){};
    void add(Item *item)
    {
      this->tray.push_back(item);
    };
  };
}; // namespace factory

#endif // SRC_MAIN_ABSTRACTFACTORY_TRAY_HPP