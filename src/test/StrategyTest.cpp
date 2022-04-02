#include <gtest/gtest.h>
#include <iostream>
#include "../main/Strategy/Player.hpp"
#include "../main/Strategy/WinningStrategy.hpp"
#include "../main/Strategy/ProbStrategy.hpp"
#include "../main/Strategy/Hand.hpp"

TEST(StrategyTest, RSPTest)
{
  Player *player1 = new Player("Taro", new WinningStrategy(1));
  Player *player2 = new Player("Hana", new ProbStrategy(1));
  for (int i = 0; i < 10; i++)
  {
    Hand *player1Hand = player1->nextHand();
    Hand *player2Hand = player2->nextHand();

    if (player1Hand->isStrongerThan(player2Hand))
    {
      std::cout << "Winner: " << player1->toString();
      player1->win();
      player2->lose();
    }
    else if (player2Hand->isStrongerThan(player1Hand))
    {
      std::cout << "Winner: " << player2->toString();
      player2->win();
      player1->lose();
    }
    else
    {
      std::cout << "Even...\n";
      player1->even();
      player2->even();
    }
  }
  std::cout << "Total result:\n";
  std::cout << player1->toString();
  std::cout << player2->toString();
  ASSERT_TRUE(true);
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}