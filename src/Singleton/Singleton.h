#ifndef SRC_SINGLETON_SINGLETON_H_
#define SRC_SINGLETON_SINGLETON_H_

#include <iostream>

class Singleton {
 private:
  Singleton();
  static Singleton *instance;

 public:
  static Singleton *getInstance();
};

#endif  // SRC_SINGLETON_SINGLETON_H_
