cmake_minimum_required(VERSION 3.5)

project(PSlab02 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(PSlab02 main.cpp
                    persona.h persona.cpp
                    tanque.h tanque.cpp
                    atleta.h atleta.cpp)

install(TARGETS PSlab02
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
