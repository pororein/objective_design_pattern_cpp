cmake_minimum_required(VERSION 3.0.0)
project(object_design_pattern VERSION 0.1.0)

include(CTest)
find_package(GTest REQUIRED)
include(GoogleTest)

enable_testing()

set(SAMPLE_TEST_SRC src/test/SampleTest.cpp src/main/TestObject/TestTargetSample.cpp)
set(ITERATOR_TEST_SRC 
  src/test/IteratorTest.cpp 
  src/main/Iterator/Aggregate.h
  src/main/Iterator/Iterator.h
  src/main/Iterator/Book.h 
  src/main/Iterator/BookShelf.h
  src/main/Iterator/BookShelfIterator.h
  src/main/Iterator/BookShelf.cpp 
  src/main/Iterator/BookShelfIterator.cpp 
  )
set(ADAPTER_TEST_SRC
  src/test/AdapterTest.cpp
  src/main/Adapter/Banner.h
  src/main/Adapter/Banner.cpp
  src/main/Adapter/Print.h
  src/main/Adapter/PrintBanner.h
  src/main/Adapter/PrintBanner.cpp
  src/main/Adapter/PrintBannerAssign.h
  src/main/Adapter/PrintBannerAssign.cpp)
set(TEMPLATE_TEST_SRC
  src/test/TemplateTest.cpp
  src/main/Template/AbstractDisplay.h
  src/main/Template/AbstractDisplay.cpp
  src/main/Template/CharDisplay.h
  src/main/Template/CharDisplay.cpp
  src/main/Template/StringDisplay.h
  src/main/Template/StringDisplay.cpp)
set(FACTORY_TEST_SRC
  src/test/FactoryTest.cpp
  src/main/Factory/framework/Product.h
  src/main/Factory/framework/Factory.h
  src/main/Factory/framework/Factory.cpp
  src/main/Factory/idcard/IDCard.h
  src/main/Factory/idcard/IDCard.cpp
  src/main/Factory/idcard/IDCardFactory.h
  src/main/Factory/idcard/IDCardFactory.cpp)
set(SINGLETON_TEST_SRC
  src/test/SingletonTest.cpp
  src/main/Singleton/Singleton.h
  src/main/Singleton/Singleton.cpp
)
set(PROTOTYPE_TEST_SRC
  src/test/PrototypeTest.cpp
  src/main/Prototype/framework/Product.h
  src/main/Prototype/framework/Manager.h
  src/main/Prototype/framework/Manager.cpp
  src/main/Prototype/MessageBox.cpp
  src/main/Prototype/UnderlinePen.cpp)
set(BUILDER_TEST_SRC
  src/test/BuilderTest.cpp
  src/main/Builder/Builder.h
  src/main/Builder/Director.h
  src/main/Builder/Director.cpp
  src/main/Builder/TextBuilder.h
  src/main/Builder/TextBuilder.cpp
  src/main/Builder/HTMLBuilder.h
  src/main/Builder/HTMLBuilder.cpp)

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

add_executable(templateTest ${TEMPLATE_TEST_SRC})
target_link_libraries(templateTest GTest::gtest GTest::gtest_main)
add_test(NAME templateTest COMMAND templateTest)

add_executable(factoryTest ${FACTORY_TEST_SRC})
target_link_libraries(factoryTest GTest::gtest GTest::gtest_main)
add_test(NAME factoryTest COMMAND factoryTest)

add_executable(singletonTest ${SINGLETON_TEST_SRC})
target_link_libraries(singletonTest GTest::gtest GTest::gtest_main)
add_test(NAME singletonTest COMMAND singletonTest)

add_executable(prototypeTest ${PROTOTYPE_TEST_SRC})
target_link_libraries(prototypeTest GTest::gtest GTest::gtest_main)
add_test(NAME prototypeTest COMMAND prototypeTest)

add_executable(builderTest ${BUILDER_TEST_SRC})
target_link_libraries(builderTest GTest::gtest GTest::gtest_main)
add_test(NAME builderTest COMMAND builderTest)

# CTestに単体テストを登録
gtest_discover_tests(sampleTest)
gtest_discover_tests(iteratorTest)
gtest_discover_tests(adapterTest)
gtest_discover_tests(templateTest)
gtest_discover_tests(factoryTest)
gtest_discover_tests(singletonTest)
gtest_discover_tests(prototypeTest)
gtest_discover_tests(builderTest)

add_executable(object_design_pattern main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
