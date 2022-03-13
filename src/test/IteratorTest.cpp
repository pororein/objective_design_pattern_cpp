#include <gtest/gtest.h>
#include "../main/Iterator/Book.h"
#include "../main/Iterator/BookShelf.h"
#include "../main/Iterator/BookShelfIterator.h"
#include "../main/Iterator/Iterator.h"

class IteratorTest : public ::testing::Test
{
protected:
  IteratorTest()
  {
    target = new BookShelf();
    Book *a = new Book("a");
    Book *b = new Book("b");
    Book *c = new Book("c");
    target->BookShelf::appendBook(a);
    target->BookShelf::appendBook(b);
    target->BookShelf::appendBook(c);
  }

  BookShelf *target;
};

TEST_F(IteratorTest, IteratorLoopTest)
{
  Iterator *itr = target->BookShelf::iterator();
  ASSERT_TRUE(itr->hasNext());
  Book *book = reinterpret_cast<Book *>(itr->next());
  ASSERT_EQ(book->getName().compare("a"), 0);

  ASSERT_TRUE(itr->hasNext());
  book = reinterpret_cast<Book *>(itr->next());
  ASSERT_EQ(book->getName().compare("b"), 0);

  ASSERT_TRUE(itr->hasNext());
  book = reinterpret_cast<Book *>(itr->next());
  ASSERT_EQ(book->getName().compare("c"), 0);

  ASSERT_FALSE(itr->hasNext());
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
