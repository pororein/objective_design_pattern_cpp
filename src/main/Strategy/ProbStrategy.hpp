#ifndef SRC_STRATEGY_PROBSTRATEGY_HPP
#define SRC_STRATEGY_PROBSTRATEGY_HPP

#include <random>
#include "Hand.hpp"
#include "Strategy.hpp"

class ProbStrategy : public Strategy
{
private:
  int prevHandValue = 0;
  int currentHandValue = 0;
  int history[3][3] = {
      {1, 1, 1},
      {1, 1, 1},
      {1, 1, 1}};
  int getSum(int handValue);

public:
  explicit ProbStrategy(int seed)
  {
    std::srand(seed);
  };
  Hand *nextHand() override;
  void study(bool win) override;
};

#endif // SRC_STRATEGY_PROBSTRATEGY_HPP