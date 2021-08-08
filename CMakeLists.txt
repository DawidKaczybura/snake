 cmake_minimum_required(VERSION 3.18.4)

 set(This Snake)
 project(${This} CXX)
 set(CMAKE_CXX_STANDARD 14)

 enable_testing()

 add_subdirectory(googletest)

 set(Headers
     Example.hpp
 )

 set(Sources
     Example.cpp
 )

 add_library(${This} STATIC ${Sources} ${Headers})

 add_subdirectory(test)