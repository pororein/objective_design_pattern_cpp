#ifndef SRC_BRIDGE_FUNCTION_COUNTDISPLAY_HPP
#define SRC_BRIDGE_FUNCTION_COUNTDISPLAY_HPP

#include "Display.hpp"
#include "../implementation/DisplayImpl.hpp"

using namespace implementation;

namespace function
{
  class CountDisplay : public Display
  {
  public:
    explicit CountDisplay(DisplayImpl *impl) : Display(impl){};
    void multiDisplay(int times);
  };
}; // namespace function

#endif // SRC_BRIDGE_FUNCTION_COUNTDISPLAY_HPP