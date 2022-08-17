<<<<<<< HEAD
cmake_minimum_required(VERSION 3.0)
project(hufmanZip VERSION 1.0)

include_directories("${PROJECT_SOURCE_DIR}/libIO/")
message("path\"${PROJECT_SOURCE_DIR}\"")

add_subdirectory(libIO)
add_subdirectory(huffman)

add_executable(testIO test1.cpp)
target_link_libraries(testIO libIO)
=======
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
>>>>>>> ac44556d321a72b2640caf29ef0bac9b22ec57f7
