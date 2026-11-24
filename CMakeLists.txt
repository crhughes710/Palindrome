cmake_minimum_required(VERSION 4.3)
project(Palindrome)

set(CMAKE_CXX_STANDARD 20)

add_executable(Palindrome main.cpp
        PalindromeChecker.h
        PalindromeChecker.cpp)
