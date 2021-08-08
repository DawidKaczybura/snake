 cmake_minimum_required(VERSION 3.18.4)

 set(This snake)
 project(${This} CXX)
 set(CMAKE_CXX_STANDARD 14)
 set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

 enable_testing()

 add_subdirectory(googletest)

 set(Headers
    Bufor.hpp
 )

 set(Sources
    Bufor.cpp
    main.cpp
 )


 add_library(${This} STATIC ${Sources} ${Headers})

 add_subdirectory(test)

 add_executable(main ${PROJECT_SOURCE_DIR}/main.cpp)