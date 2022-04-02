#include "ProbStrategy.hpp"

int ProbStrategy::getSum(int handValue)
{
  int sum = 0;
  for (int i = 0; i < 3; i++)
  {
    sum += this->history[handValue][i];
  }
  return sum;
}

Hand *ProbStrategy::nextHand()
{
  int bet = random() % this->getSum(this->currentHandValue);
  int handValue = 0;
  if (bet < this->history[this->currentHandValue][HANDVALUE_GUU])
  {
    handValue = HANDVALUE_GUU;
  }
  else if (bet < (this->history[this->currentHandValue][HANDVALUE_GUU] + this->history[this->currentHandValue][HANDVALUE_CHO]))
  {
    handValue = HANDVALUE_CHO;
  }
  else
  {
    handValue = HANDVALUE_PAA;
  }
  this->prevHandValue = this->currentHandValue;
  this->currentHandValue = handValue;
  return hand[handValue];
}

void ProbStrategy::study(bool win)
{
  if (win)
  {
    this->history[this->prevHandValue][this->currentHandValue]++;
  }
  else
  {
    this->history[this->prevHandValue][(this->currentHandValue + 1) % 3]++;
    this->history[this->prevHandValue][(this->currentHandValue + 2) % 3]++;
  }
}