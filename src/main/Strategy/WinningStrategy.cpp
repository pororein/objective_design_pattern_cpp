#include "WinningStrategy.hpp"

Hand *WinningStrategy::nextHand()
{
  if (!this->won)
  {
    this->prevHand = hand[random() % 3];
  }

  return this->prevHand;
}

void WinningStrategy::study(bool win)
{
  this->won = win;
}
