#include "Director.h"

Director::Director(Builder *builder)
{
  this->builder = builder;
}

void Director::construct()
{
  builder->makeTitle(u8"Greeting");
  builder->makeString(u8"朝から昼にかけて");
  builder->makeItems(std::vector<std::string>{
      u8"おはようございます。",
      u8"こんにちは。"});
  builder->makeString(u8"夜に");
  builder->makeItems(std::vector<std::string>{
      u8"こんばんは。",
      u8"おやすみなさい。",
      u8"さようなら。"});
  builder->close();
}
