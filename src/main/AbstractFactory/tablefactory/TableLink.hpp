#ifndef SRC_MAIN_ABSTRACTFACTORY_TABLELINKHPP
#define SRC_MAIN_ABSTRACTFACTORY_TABLELINKHPP

#include <string>
#include "../factory/Link.hpp"

namespace tablefactory
{
  class TableLink : public factory::Link
  {
  public:
    explicit TableLink(const std::string &caption, const std::string &url) : Link(caption, url){};
    std::string makeHTML() override;
  };
}; // namespace tablefactory

#endif // SRC_MAIN_ABSTRACTFACTORY_TABLELINKHPP