#include "PrintBannerAssign.h"

void PrintBannerAssign::printWeak() {
  this->banner->showWithParen();
}

void PrintBannerAssign::printStrong() {
  this->banner->showWithAster();
}
