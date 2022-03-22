#ifndef SRC_MAIN_ABSTRACTFACTORY_LISTLINKHPP
#define SRC_MAIN_ABSTRACTFACTORY_LISTLINKHPP

#include <string>
#include "../factory/Link.hpp"
#include "../factory/Item.hpp"

namespace listfactory
{
  class ListLink : public factory::Link
  {
  public:
    explicit ListLink(const std::string &caption, const std::string &url) : Link(caption, url){};
    std::string makeHTML() override;
  };
}; // namespace listfactory

#endif // SRC_MAIN_ABSTRACTFACTORY_LISTLINKHPP
