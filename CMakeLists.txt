cmake_minimum_required(VERSION 3.31)
project(school_manager)

set(CMAKE_CXX_STANDARD 20)

add_executable(school_manager main.cpp student.cpp student_utils.cpp menu.cpp globals.cpp showStudentsCounter.cpp studentFileOps.cpp studentManager.cpp)
