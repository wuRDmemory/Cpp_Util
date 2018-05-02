cmake_minimum_required(VERSION 3.9)
set(CMAKE_CXX_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/include)
aux_source_directory(${PROJECT_SOURCE_DIR}/source SOURCE)

add_library(Util SHARED ${SOURCE})
target_link_libraries(Util ${Boost_LIBRARIES})
