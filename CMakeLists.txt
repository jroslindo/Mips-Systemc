# check cmake version
cmake_minimum_required(VERSION 3.5)

project(testsystemc CXX)

set(CMAKE_PREFIX_PATH $ENV(SYSTEMC_HOME))

find_package(SystemCLanguage CONFIG REQUIRED)

add_executable(
  ${PROJECT_NAME}
  main.cpp
  test_or_1bit.cpp
  test_or_1bit.h
  Controle/controle.cpp
  Controle/controle.h
)

target_link_libraries(
  ${PROJECT_NAME}
  PRIVATE SystemC::systemc
)

set_property(
  TARGET ${PROJECT_NAME}
  PROPERTY CXX_STANDARD ${SystemC_CXX_STANDARD}
)
