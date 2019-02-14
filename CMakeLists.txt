cmake_minimum_required(VERSION 3.13)
project(SpreadsheetQtWidget)
add_subdirectory(Test)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_PREFIX_PATH /home/osboxes/Qt/5.12.1/gcc_64)

include_directories(${CMAKE_PREFIX_PATH}/include)

find_package(Qt5Widgets REQUIRED)

add_executable(SpreadsheetQtWidget main.cpp Subject.h Observer.h Cell.cpp Cell.h Operation.cpp Operation.h Sum.cpp Sum.h Minimum.cpp Minimum.h Maximum.cpp Maximum.h Mean.cpp Mean.h)
target_link_libraries(SpreadsheetQtWidget Qt5::Widgets)


