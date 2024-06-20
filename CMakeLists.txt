cmake_minimum_required(VERSION 3.28)
project(percolation)

set(CMAKE_CXX_STANDARD 20)

add_executable(percolation main.cpp
        src/percolation.cpp
        src/include/percolation.h
        src/include/quick-find.h
        src/include/quick-union.h
        src/include/quick-weighted-union.h
        src/include/union-find.h
        src/quick-find.cpp)
