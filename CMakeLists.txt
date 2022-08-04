cmake_minimum_required(VERSION 3.0.0)
project(obstruction VERSION 0.1.0)

include(CTest)
enable_testing()

set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

# find_package(Qt6 REQUIRED COMPONENTS Core Widgets Gui)
# qt_standard_project_setup()

add_executable(obstruction main.cpp)

# target_link_libraries(obstruction PRIVATE Qt6::Core Qt6::Widgets Qt6::Gui)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
