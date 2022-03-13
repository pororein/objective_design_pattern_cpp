#include "AbstractDisplay.h"

void AbstractDisplay::display() {
  this->open();

    for (int i = 0; i < 5; i++) {
      this->print();
    }

  this->close();
}
