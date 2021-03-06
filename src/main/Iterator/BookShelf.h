#ifndef SRC_ITERATOR_BOOKSHELF_H_
#define SRC_ITERATOR_BOOKSHELF_H_

#include <vector>
#include "./Book.h"
#include "./Aggregate.h"
#include "./Iterator.h"
#include "./BookShelfIterator.h"

class BookShelfIterator;

class BookShelf: public Aggregate {
 public:
  void appendBook(Book *book);
  Book* getBookAt(int index);
  int getLength();
  Iterator *iterator() override;

 private:
  std::vector<Book*> books;
};

#endif  // SRC_ITERATOR_BOOKSHELF_H_
