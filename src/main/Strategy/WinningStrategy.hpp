#ifndef SRC_STRATEGY_WINNINGSTRATEGY_HPP
#define SRC_STRATEGY_WINNINGSTRATEGY_HPP

#include <random>
#include "Hand.hpp"
#include "Strategy.hpp"

class WinningStrategy : public Strategy
{
private:
  bool won = false;
  Hand *prevHand;

public:
  explicit WinningStrategy(int seed)
  {
    std::srand(seed);
  };
  Hand *nextHand() override;
  void study(bool win) override;
};

#endif // SRC_STRATEGY_WINNINGSTRATEGY_HPP