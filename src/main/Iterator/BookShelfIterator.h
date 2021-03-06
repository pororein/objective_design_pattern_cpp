#ifndef SRC_ITERATOR_BOOKSHELFITERATOR_H_
#define SRC_ITERATOR_BOOKSHELFITERATOR_H_

#include "./BookShelf.h"
#include "./Iterator.h"

class BookShelf;

class BookShelfIterator: public Iterator {
 public:
  explicit BookShelfIterator(BookShelf *bookShelf) {
    this->bookShelf = bookShelf;
    this->index = 0;
  }
  bool hasNext() override;
  void *next() override;

 private:
  BookShelf *bookShelf;
  int index;
};

#endif  // SRC_ITERATOR_BOOKSHELFITERATOR_H_
