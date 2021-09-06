cmake_minimum_required(VERSION 3.0.0)
project(object_design_pattern VERSION 0.1.0)

include(CTest)
find_package(GTest REQUIRED)
include(GoogleTest)

enable_testing()

set(SAMPLE_TEST_SRC test/SampleTest.cpp src/TestObject/TestTargetSample.cpp)
set(ITERATOR_TEST_SRC 
  test/IteratorTest.cpp 
  src/Iterator/Aggregate.h
  src/Iterator/Iterator.h
  src/Iterator/Book.h 
  src/Iterator/BookShelf.h
  src/Iterator/BookShelfIterator.h
  src/Iterator/BookShelf.cpp 
  src/Iterator/BookShelfIterator.cpp 
  )
set(ADAPTER_TEST_SRC
  test/AdapterTest.cpp
  src/Adapter/Banner.h
  src/Adapter/Banner.cpp
  src/Adapter/Print.h
  src/Adapter/PrintBanner.h
  src/Adapter/PrintBanner.cpp)

# 単体テスト
add_executable(sampleTest ${SAMPLE_TEST_SRC})
target_link_libraries(sampleTest GTest::gtest GTest::gtest_main)
add_test(NAME sampleTest COMMAND sampleTest)

add_executable(iteratorTest ${ITERATOR_TEST_SRC})
target_link_libraries(iteratorTest GTest::gtest GTest::gtest_main)
add_test(NAME iteratorTest COMMAND iteratorTest)

add_executable(adapterTest ${ADAPTER_TEST_SRC})
target_link_libraries(adapterTest GTest::gtest GTest::gtest_main)
add_test(NAME adapterTest COMMAND adapterTest)

# CTestに単体テストを登録
gtest_discover_tests(sampleTest)
gtest_discover_tests(iteratorTest)
gtest_discover_tests(adapterTest)

add_executable(object_design_pattern main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
