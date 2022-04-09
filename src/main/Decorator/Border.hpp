#ifndef SRC_DECORATOR_BORDER_HPP_
#define SRC_DECORATOR_BORDER_HPP_

#include "Display.hpp"

class Border : public Display
{
protected:
  Display *display;
  Border(Display *display)
  {
    this->display = display;
  };
};

#endif // SRC_DECORATOR_BORDER_HPP_