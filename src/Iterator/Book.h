#ifndef SRC_ITERATOR_BOOK_H_
#define SRC_ITERATOR_BOOK_H_

#include <string>

class Book {
 public:
  explicit Book(const std::string &name) {
    this->name = name;
  }
  ~Book() {
    delete this;
  }

  std::string getName() {
    return this->name;
  }

 private:
  std::string name;
};

#endif  // SRC_ITERATOR_BOOK_H_
