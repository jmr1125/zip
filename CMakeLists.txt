cmake_minimum_required(VERSION 3.0.0)
project(hmz VERSION 1.0)

include_directories(FOLib)

message("${CMAKE_PREFIX_PATH}")
message("${CMAKE_INSTALL_PREFIX}")

# add_subdictionary(FOlib)
add_subdirectory(FOlib)
add_subdirectory(huffman)


add_executable(test1 testFOLib.cpp)
add_executable(test2 test2.cpp)
target_link_libraries(test2 libHuffman)
target_link_libraries(test1 fol)

add_executable(main main.cpp)
target_link_libraries(main libHuffman fol)
