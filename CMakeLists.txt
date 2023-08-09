cmake_minimum_required(VERSION 3.5.0)
project(codebase VERSION 0.1.0 LANGUAGES C CXX)

include(CTest)
enable_testing()

add_executable(codebase main.cpp)

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
set(BASE_DIR ${CMAKE_SOURCE_DIR}/base)
include(CPack)

target_include_directories(codebase PRIVATE ${BASE_DIR})
