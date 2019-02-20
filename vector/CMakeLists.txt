project(vector)

cmake_minimum_required (VERSION 3.5)

# add_definitions(-std=c++11)

# set(CXX_FLAGS "-Wall")
# set(CMAKE_CXX_FLAGS, "${CXX_FLAGS}")

set(CMAKE_CXX_STANDARD 11)

add_executable(vector src/main.cpp src/copyFrom.cpp src/operatorEqual.cpp src/expand.cpp src/shrink.cpp
        src/operatorBrackets.cpp src/unsort.cpp src/swap.cpp src/find.cpp src/insert.cpp src/remove.cpp
        src/deduplicate.cpp)

#target_link_libraries(path_planning z ssl uv uWS)
