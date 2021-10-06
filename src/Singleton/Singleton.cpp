#include "Singleton.h"

Singleton *Singleton::instance = new Singleton();

Singleton::Singleton() {
  std::cout << "Instance Created." << std::endl;
}

Singleton* Singleton::getInstance() {
  return Singleton::instance;
}
