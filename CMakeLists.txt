cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_TOOLCHAIN_FILE "${CMAKE_BINARY_DIR}/conan_toolchain.cmake")

project(Benzene)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)

option(BUILD_SHARED_LIBS "Build shared libraries" OFF)

find_package(SFML REQUIRED)

add_executable(Benzene src/main.cpp)
target_link_libraries(Benzene PRIVATE sfml::sfml)
