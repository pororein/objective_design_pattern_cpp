#ifndef SRC_BRIDGE_FUNCTION_DISPLAY_HPP
#define SRC_BRIDGE_FUNCTION_DISPLAY_HPP

#include "../implementation/DisplayImpl.hpp"

using namespace implementation;

namespace function
{
  class Display
  {
  private:
    DisplayImpl *impl;

  public:
    explicit Display(DisplayImpl *impl)
    {
      this->impl = impl;
    };
    void open();
    void print();
    void close();
    void display();
  };
}; // namespace function

#endif // SRC_BRIDGE_FUNCTION_DISPLAY_HPP