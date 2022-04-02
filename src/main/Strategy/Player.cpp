#include "Player.hpp"

Hand *Player::nextHand()
{
  return this->strategy->nextHand();
}

void Player::study(bool win)
{
  this->strategy->study(win);
}

void Player::win()
{
  this->strategy->study(true);
  this->winCount++;
  this->gameCount++;
}

void Player::lose()
{
  this->strategy->study(false);
  this->loseCount++;
  this->gameCount++;
}

void Player::even()
{
  this->gameCount++;
}

std::string Player::toString()
{
  std::stringstream builder;
  builder << "[" << this->name << ":";
  builder << this->gameCount << " games, ";
  builder << this->winCount << " win, ";
  builder << this->loseCount << " lose"
          << "]\n";
  return builder.str();
}