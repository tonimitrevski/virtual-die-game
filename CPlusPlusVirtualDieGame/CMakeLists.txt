# CMakeList.txt : CMake project for CPlusPlusVirtualDieGame, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.8)

add_library(car Car/Car.h Car/Car.cpp)
add_library(random Random/Engine.h Random/Engine.cpp)

# Add source to this project's executable.
add_executable (CMakeProject1 "Main.cpp" "Main.h")

# TODO: Add tests and install targets if needed.
target_link_libraries(CMakeProject1 PRIVATE car)
target_link_libraries(CMakeProject1 PRIVATE random)
