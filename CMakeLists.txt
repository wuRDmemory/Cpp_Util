cmake_minimum_required(VERSION 3.9)
project(Util)

set(CMAKE_CXX_STANDARD 11)
set(LIBRARY_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/lib)

find_package(Boost REQUIRED COMPONENTS serialization filesystem)

include_directories(${PROJECT_SOURCE_DIR}/include)
link_directories(${PROJECT_SOURCE_DIR}/lib/)

add_subdirectory(${PROJECT_SOURCE_DIR}/source)

add_executable(TEST main.cpp)
target_link_libraries(TEST ${Boost_LIBRARIES} Util)
