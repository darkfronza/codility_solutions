cmake_minimum_required(VERSION 2.8)

project(codility)

set(CMAKE_BUILD_TYPE Debug)
set(CMAKE_CXX_STANDARD 14)

add_executable(binary_gap binary_gap.cpp)
add_executable(arrays_cyclic_rotation arrays_cyclic_rotation.cpp)
add_executable(odd_occurrences_in_array odd_occurrences_in_array.cpp)
add_executable(perm_missing_elem perm_missing_elem.cpp)
add_executable(frogjmp frogjmp.cpp)
add_executable(tape_equilibrium tape_equilibrium.cpp)
add_executable(counting_perm_check counting_perm_check.cpp)
add_executable(frog_river_one frog_river_one.cpp)
add_executable(max_counters max_counters.cpp)
