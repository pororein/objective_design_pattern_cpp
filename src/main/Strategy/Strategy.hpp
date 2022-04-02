#ifndef SRC_STRATEGY_STRATEGY_HPP
#define SRC_STRATEGY_STRATEGY_HPP

#include "Hand.hpp"

class Strategy
{
public:
  virtual Hand *nextHand() = 0;
  virtual void study(bool win) = 0;
};

#endif // SRC_STRATEGY_STRATEGY_HPP