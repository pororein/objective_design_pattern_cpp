#ifndef SRC_ITERATOR_AGGREGATE_H_
#define SRC_ITERATOR_AGGREGATE_H_

#include "./Iterator.h"

class Aggregate {
 public:
  virtual Iterator *iterator() { return new Iterator(); }
};

#endif  // SRC_ITERATOR_AGGREGATE_H_
