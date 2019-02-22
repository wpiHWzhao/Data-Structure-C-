
cmake_minimum_required (VERSION 3.12)

project(vector)


set(CMAKE_CXX_STANDARD 11)

add_executable(vector src/main.cpp src/copyFrom.cpp src/operatorEqual.cpp src/expand.cpp src/shrink.cpp
        src/operatorBrackets.cpp src/unsort.cpp src/swap.cpp src/find.cpp src/insert.cpp src/remove.cpp
        src/deduplicate.cpp src/traverse.cpp src/disordered.cpp src/uniquify.cpp src/binarySearch.cpp
        src/bubbleSort.cpp src/mergeSort.cpp src/sort.cpp)

