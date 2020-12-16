# check cmake version
cmake_minimum_required(VERSION 3.5)

project(testsystemc CXX)

set(CMAKE_PREFIX_PATH $ENV(SYSTEMC_HOME))

find_package(SystemCLanguage CONFIG REQUIRED)

add_executable(
  ${PROJECT_NAME}
  main.cpp
  test_memoria_ram.cpp
  test_memoria_ram.h
  CLOCK_DIV/clock_div.h
  CLOCK_DIV/clock_div.cpp
)

target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE SystemC::systemc
)

set_property(
  TARGET ${PROJECT_NAME}
  PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD}
)
