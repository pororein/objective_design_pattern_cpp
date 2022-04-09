cmake_minimum_required(VERSION 3.0.0)
project(object_design_pattern VERSION 0.1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

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
set(ABSTRACT_FACTORY_TEST_SRC
  src/test/AbstractFactoryTest.cpp)
set(BRIDGE_TEST_SRC
  src/test/BridgeTest.cpp
  src/main/Bridge/implementation/DisplayImpl.hpp
  src/main/Bridge/implementation/StringDisplayImpl.hpp
  src/main/Bridge/implementation/StringDisplayImpl.cpp
  src/main/Bridge/function/Display.hpp
  src/main/Bridge/function/Display.cpp
  src/main/Bridge/function/CountDisplay.hpp
  src/main/Bridge/function/CountDisplay.cpp)
set(STRATEGY_TEST_SRC
  src/test/StrategyTest.cpp
  src/main/Strategy/Hand.hpp
  src/main/Strategy/Hand.cpp
  src/main/Strategy/Strategy.hpp
  src/main/Strategy/ProbStrategy.hpp
  src/main/Strategy/ProbStrategy.cpp
  src/main/Strategy/WinningStrategy.hpp
  src/main/Strategy/WinningStrategy.cpp
  src/main/Strategy/Player.hpp
  src/main/Strategy/Player.cpp)
set(COMPOSITE_TEST_SRC
  src/test/CompositeTest.cpp
  src/main/Composite/FileTreatmentException.hpp
  src/main/Composite/FileTreatmentException.cpp
  src/main/Composite/Entry.hpp
  src/main/Composite/Entry.cpp
  src/main/Composite/File.hpp
  src/main/Composite/File.cpp
  src/main/Composite/Directory.hpp
  src/main/Composite/Directory.cpp)
set(DECORATOR_TEST_SRC
  src/test/DecoratorTest.cpp
  src/main/Decorator/Display.hpp
  src/main/Decorator/Display.cpp
  src/main/Decorator/StringDisplay.hpp
  src/main/Decorator/StringDisplay.cpp
  src/main/Decorator/Border.hpp
  src/main/Decorator/SideBorder.hpp
  src/main/Decorator/SideBorder.cpp
  src/main/Decorator/FullBorder.hpp
  src/main/Decorator/FullBorder.cpp)

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

add_executable(abstractFactoryTest ${ABSTRACT_FACTORY_TEST_SRC})
add_library(abstractFactoryLib
src/main/AbstractFactory/factory/Item.hpp
src/main/AbstractFactory/factory/Link.hpp
src/main/AbstractFactory/factory/Page.hpp
src/main/AbstractFactory/factory/Tray.hpp
src/main/AbstractFactory/factory/Factory.hpp
src/main/AbstractFactory/listfactory/ListLink.hpp
src/main/AbstractFactory/listfactory/ListLink.cpp
src/main/AbstractFactory/listfactory/ListPage.hpp
src/main/AbstractFactory/listfactory/ListPage.cpp
src/main/AbstractFactory/listfactory/ListTray.hpp
src/main/AbstractFactory/listfactory/ListTray.cpp
src/main/AbstractFactory/listfactory/ListFactory.hpp
src/main/AbstractFactory/listfactory/ListFactory.cpp
src/main/AbstractFactory/tablefactory/TableLink.hpp
src/main/AbstractFactory/tablefactory/TableLink.cpp
src/main/AbstractFactory/tablefactory/TablePage.hpp
src/main/AbstractFactory/tablefactory/TablePage.cpp
src/main/AbstractFactory/tablefactory/TableTray.hpp
src/main/AbstractFactory/tablefactory/TableTray.cpp
src/main/AbstractFactory/tablefactory/TableFactory.hpp
src/main/AbstractFactory/tablefactory/TableFactory.cpp)
add_dependencies(abstractFactoryTest abstractFactoryLib)
target_link_libraries(abstractFactoryTest abstractFactoryLib GTest::gtest GTest::gtest_main)
add_test(NAME abstractFactoryTest COMMAND abstractFactoryTest)

add_executable(bridgeTest ${BRIDGE_TEST_SRC})
target_link_libraries(bridgeTest GTest::gtest GTest::gtest_main)
add_test(NAME bridgeTest COMMAND bridgeTest)

add_executable(strategyTest ${STRATEGY_TEST_SRC})
target_link_libraries(strategyTest GTest::gtest GTest::gtest_main)
add_test(NAME strategyTest COMMAND strategyTest)

add_executable(compositeTest ${COMPOSITE_TEST_SRC})
target_link_libraries(compositeTest GTest::gtest GTest::gtest_main)
add_test(NAME compositeTest COMMAND compositeTest)

add_executable(decoratorTest ${DECORATOR_TEST_SRC})
target_link_libraries(decoratorTest GTest::gtest GTest::gtest_main)
add_test(NAME decoratorTest COMMAND decoratorTest)

# CTestに単体テストを登録
gtest_discover_tests(sampleTest)
gtest_discover_tests(iteratorTest)
gtest_discover_tests(adapterTest)
gtest_discover_tests(templateTest)
gtest_discover_tests(factoryTest)
gtest_discover_tests(singletonTest)
gtest_discover_tests(prototypeTest)
gtest_discover_tests(builderTest)
gtest_discover_tests(abstractFactoryTest)
gtest_discover_tests(bridgeTest)
gtest_discover_tests(strategyTest)
gtest_discover_tests(compositeTest)
gtest_discover_tests(decoratorTest)

add_executable(object_design_pattern main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
