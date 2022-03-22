#ifndef SRC_MAIN_ABSTRACTFACTORY_TABLETRAY_HPP
#define SRC_MAIN_ABSTRACTFACTORY_TABLETRAY_HPP

#include <string>
#include <sstream>
#include "../factory/Tray.hpp"

namespace tablefactory
{
  class TableTray : public factory::Tray
  {
  public:
    explicit TableTray(const std::string &caption) : Tray(caption){};
    std::string makeHTML() override;
  };
}; // namespace tablefactory

#endif // SRC_MAIN_ABSTRACTFACTORY_TABLETRAY_HPP