#include "./BookShelf.h"

void BookShelf::appendBook(Book *book) {
  this->books.push_back(book);
}

Book* BookShelf::getBookAt(int index) {
  return this->books[index];
}

int BookShelf::getLength() {
  return this->books.size();
}

Iterator* BookShelf::iterator() {
  Iterator *ptrIterator = new BookShelfIterator(this);
  return ptrIterator;
}
