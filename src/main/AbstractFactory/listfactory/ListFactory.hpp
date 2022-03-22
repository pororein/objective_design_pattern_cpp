#ifndef SRC_MAIN_ABSTRACTFACTORY_LISTFACTORY_HPP
#define SRC_MAIN_ABSTRACTFACTORY_LISTFACTORY_HPP

#include <string>
#include "../factory/Factory.hpp"
#include "../factory/Link.hpp"
#include "../factory/Tray.hpp"
#include "../factory/Page.hpp"
#include "ListLink.hpp"
#include "ListPage.hpp"
#include "ListTray.hpp"

namespace listfactory
{
  class ListFactory : public factory::Factory
  {
  public:
    ~ListFactory(){};
    factory::Link *createLink(const std::string &caption, const std::string &url) override;
    factory::Tray *createTray(const std::string &caption) override;
    factory::Page *createPage(const std::string &title, const std::string &author) override;
  };

}; // namespace listfactory

#endif // SRC_MAIN_ABSTRACTFACTORY_LISTFACTORY_HPP