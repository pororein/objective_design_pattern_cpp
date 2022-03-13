#include "./BookShelfIterator.h"

bool BookShelfIterator::hasNext() {
  if (this->index < this->bookShelf->getLength()) {
    return true;
  } else {
    return false;
  }
}

void* BookShelfIterator::next() {
  Book *ptrBook = this->bookShelf->getBookAt(this->index);
  this->index++;
  return ptrBook;
}
