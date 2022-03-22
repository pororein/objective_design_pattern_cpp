#ifndef SRC_MAIN_ABSTRACTFACTORY_LISTTRAYHPP
#define SRC_MAIN_ABSTRACTFACTORY_LISTTRAYHPP

#include <string>
#include <sstream>
#include "../factory/Tray.hpp"

namespace listfactory
{
  class ListTray : public factory::Tray
  {
  public:
    explicit ListTray(const std::string &caption) : Tray(caption){};
    std::string makeHTML() override;
  };
}; // namespace listfactory

#endif // SRC_MAIN_ABSTRACTFACTORY_LISTTRAYHPP
