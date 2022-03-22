#ifndef SRC_MAIN_ABSTRACTFACTORY_TABLEPAGE_HPP
#define SRC_MAIN_ABSTRACTFACTORY_TABLEPAGE_HPP

#include <string>
#include <sstream>
#include "../factory/Page.hpp"

namespace tablefactory
{
  class TablePage : public factory::Page
  {
  public:
    explicit TablePage(const std::string &title, const std::string &author) : Page(title, author){};
    std::string makeHTML() override;
  };
}; // namespace tablefactory

#endif // SRC_MAIN_ABSTRACTFACTORY_TABLEPAGE_HPP