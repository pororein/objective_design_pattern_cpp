#ifndef SRC_STRATEGY_HAND_HPP
#define SRC_STRATEGY_HAND_HPP

#include <string>

class Hand
{
private:
  int handvalue;
  static inline const std::string name[3] = {"グー", "チョキ", "パー"};
  int fight(Hand *h);

public:
  explicit Hand(const int handvalue)
  {
    this->handvalue = handvalue;
  };
  bool isStrongerThan(Hand *h);
  bool isWeakerThan(Hand *h);
  std::string toString();
};

extern const int HANDVALUE_GUU;
extern const int HANDVALUE_CHO;
extern const int HANDVALUE_PAA;
extern Hand *hand[3];

#endif // SRC_STRATEGY_HAND_HPP