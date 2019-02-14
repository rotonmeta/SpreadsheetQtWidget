cmake_minimum_required(VERSION 3.13)

add_subdirectory(./googletest)
set(gtest_SOURCE_DIR, ./googletest/)
include_directories(${gtest_SOURCE_DIR} /include ${gtest_SOURCE_DIR})

find_package(Qt5Widgets REQUIRED)

add_executable(RunTest Tests.cpp ../Subject.h ../Observer.h ../Cell.cpp ../Cell.h ../Operation.cpp ../Operation.h ../Sum.cpp ../Sum.h ../Minimum.cpp ../Minimum.h ../Maximum.cpp ../Maximum.h ../Mean.cpp ../Mean.h)
target_link_libraries(RunTest gtest gtest_main Qt5::Widgets)