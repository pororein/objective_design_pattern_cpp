#ifndef SRC_MAIN_ABSTRACTFACTORY_FACTORY_HPP
#define SRC_MAIN_ABSTRACTFACTORY_FACTORY_HPP

#include <string>
#include "Link.hpp"
#include "Tray.hpp"
#include "Page.hpp"

/**
 * NOTE:
 *  C++にはリフレクションがないため、
 *  Template式で代替する
 */

namespace factory
{
  class Factory
  {
  public:
    static Factory *getFactory(Factory *concrete)
    {
      return concrete;
    };
    virtual ~Factory() = default;
    virtual Link *createLink(const std::string &caption, const std::string &url) = 0;
    virtual Tray *createTray(const std::string &caption) = 0;
    virtual Page *createPage(const std::string &title, const std::string &author) = 0;
  };
}; // namespace factory

#endif
