cmake_minimum_required(VERSION 3.26)
project(ObjectOrientedPrograming)

set(CMAKE_CXX_STANDARD 17)

add_executable(ObjectOrientedPrograming main.cpp
        Employee.cpp
        Employee.h
        Developer.cpp
        Developer.h
        AbstractEmployee.cpp
        AbstractEmployee.h
        Teacher.cpp
        Teacher.h)
