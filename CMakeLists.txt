cmake_minimum_required (VERSION 3.5)
project (Bash_Books)

set(CMAKE_CXX17_STANDARD_COMPILE_OPTION "-std=c++17")






include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable (bashbk ${SOURCES})
