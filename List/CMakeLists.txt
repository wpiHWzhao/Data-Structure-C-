cmake_minimum_required(VERSION 3.13)
project(List)

set(CMAKE_CXX_STANDARD 11)

add_executable(List src/main.cpp src/listNode.h src/listNodePosi_insertAsPred.cpp src/listNodePosi_insertAsSucc.cpp
        src/list.h src/listBracket.cpp src/listClear.cpp src/constructor.cpp src/copyNodes.cpp src/deduplicate.cpp src/destructor.cpp src/disordered.cpp src/find.cpp src/init.cpp src/insert.cpp src/insertionSort.cpp src/merge.cpp src/mergeSort.cpp src/remove.cpp src/search.cpp src/selectionSort.cpp src/selectMax.cpp src/reverse.cpp src/traverse.cpp)