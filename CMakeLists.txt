cmake_minimum_required(VERSION 3.0.0)
project(hmz VERSION 1.0)

include_directories(FOLib)

message("${CMAKE_PREFIX_PATH}")
message("${CMAKE_INSTALL_PREFIX}")

# add_subdictionary(FOlib)
add_subdirectory(FOlib)

link_directories(${PROJECT_BINARY_DIR}/FOlib)

add_executable(test1 testFOLib.cpp)
# target_link_libraries(test1 "./FOLib/libfol.a")
# target_link_libraries(test1 "${CMAKE_INSTALL_PREFIX}/FOLib/libfol")
target_link_libraries(test1 fol)
