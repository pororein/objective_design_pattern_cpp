#ifndef SRC_ITERATOR_ITERATOR_H_
#define SRC_ITERATOR_ITERATOR_H_

class Iterator {
 public:
  virtual bool hasNext() { return true; }
  virtual void *next() { return nullptr; }
};

#endif  // SRC_ITERATOR_ITERATOR_H_
