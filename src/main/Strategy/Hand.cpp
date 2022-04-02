#include "Hand.hpp"

const int HANDVALUE_GUU = 0;
const int HANDVALUE_CHO = 1;
const int HANDVALUE_PAA = 2;

Hand *hand[3] = {
    new Hand(HANDVALUE_GUU),
    new Hand(HANDVALUE_CHO),
    new Hand(HANDVALUE_PAA)};

bool Hand::isStrongerThan(Hand *h)
{
  return Hand::fight(h) == 1;
}

bool Hand::isWeakerThan(Hand *h)
{
  return Hand::fight(h) == -1;
}

int Hand::fight(Hand *h)
{

  if (this == h)
  {
    return 0;
  }
  else if (((this->handvalue + 1) % 3) == h->handvalue)
  {
    return 1;
  }
  else
  {
    return -1;
  }
}