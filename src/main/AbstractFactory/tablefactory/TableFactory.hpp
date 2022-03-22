#ifndef SRC_MAIN_ABSTRACTFACTORY_TABLEFACTORY_HPP
#define SRC_MAIN_ABSTRACTFACTORY_TABLEFACTORY_HPP

#include <string>
#include "../factory/Factory.hpp"
#include "../factory/Link.hpp"
#include "../factory/Tray.hpp"
#include "../factory/Page.hpp"
#include "TableLink.hpp"
#include "TableTray.hpp"
#include "TablePage.hpp"

namespace tablefactory
{
  class TableFactory : public factory::Factory
  {
  public:
    ~TableFactory(){};
    factory::Link *createLink(const std::string &caption, const std::string &url) override;
    factory::Tray *createTray(const std::string &caption) override;
    factory::Page *createPage(const std::string &title, const std::string &author) override;
  };
}; // namespace tablefactory

#endif // SRC_MAIN_ABSTRACTFACTORY_TABLEFACTORY_HPP
