cmake_minimum_required (VERSION 3.5)
project (Bash_Books)


include_directories(include)
file(GLOB SOURCES "src/*.cpp")

add_executable (bashbk ${SOURCES})
