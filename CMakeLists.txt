 cmake_minimum_required(VERSION 3.18.4)

 set(This snake)
 project(${This} CXX)
 set(CMAKE_CXX_STANDARD 14)
 set (CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

 enable_testing()

 add_subdirectory(googletest)

 set(Headers
    Buffer.hpp
    Console.hpp
    Dimension.hpp
    Display.hpp
    Game.hpp
    Position.hpp
 )

 set(Sources
    Buffer.cpp
    Console.cpp
    Dimension.cpp
    Display.cpp
    Game.cpp
    Position.cpp
    main.cpp
 )


 add_library(${This} STATIC ${Sources} ${Headers})

 add_subdirectory(test)
 add_executable(main ${Sources})
 #add_executable(main ${PROJECT_SOURCE_DIR}/main.cpp)