#ifndef SRC_ADAPTER_BANNER_H
#define SRC_ADAPTER_BANNER_H

#include <string>
#include <iostream>

class Banner {
 public:
  explicit Banner(const std::string &string) { this->str = string; }
  void showWithParen();
  void showWithAster();

 private:
  std::string str;
};

#endif  // SRC_ADAPTER_BANNER_H_
