#ifndef SRC_STRATEGY_PLAYER_HPP
#define SRC_STRATEGY_PLAYER_HPP

#include <string>
#include <sstream>
#include "Hand.hpp"
#include "Strategy.hpp"

class Player
{
private:
  std::string name;
  Strategy *strategy;
  int winCount = 0;
  int loseCount = 0;
  int gameCount = 0;

public:
  explicit Player(const std::string &name, Strategy *strategy)
  {
    this->name = name;
    this->strategy = strategy;
  };
  Hand *nextHand();
  void study(bool win);
  void win();
  void lose();
  void even();
  std::string toString();
};

#endif // SRC_STRATEGY_PLAYER_HPP