#ifndef SRC_BRIDGE_IMPLEMENTATION_STRINGDISPLAYIMPL_HPP
#define SRC_BRIDGE_IMPLEMENTATION_STRINGDISPLAYIMPL_HPP

#include <string>
#include <iostream>
#include "DisplayImpl.hpp"

namespace implementation
{
  class StringDisplayImpl : public DisplayImpl
  {
  private:
    std::string str;
    int width;

  public:
    explicit StringDisplayImpl(const std::string &str)
    {
      this->str = str;
      this->width = (int)str.length();
    };
    void rawOpen() override;
    void rawPrint() override;
    void rawClose() override;
    void printLine();
  };
}; // namespace implementation

#endif // SRC_BRIDGE_IMPLEMENTATION_STRINGDISPLAYIMPL_HPP