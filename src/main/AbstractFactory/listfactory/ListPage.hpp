#ifndef SRC_MAIN_ABSTRACTFACTORY_LISTPAGEHPP
#define SRC_MAIN_ABSTRACTFACTORY_LISTPAGEHPP

#include <string>
#include <sstream>
#include "../factory/Page.hpp"
#include "../factory/Item.hpp"

namespace listfactory
{
  class ListPage : public factory::Page
  {
  public:
    explicit ListPage(const std::string &title, const std::string &author) : Page(title, author){};
    std::string makeHTML() override;
  };
}; // namespace listfactory

#endif // SRC_MAIN_ABSTRACTFACTORY_LISTPAGEHPP
