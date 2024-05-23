cmake_minimum_required(VERSION 3.20)

set(CMAKE_CXX_STANDARD 14)

# Set the compilers to gcc and g++
set(CMAKE_C_COMPILER gcc)
set(CMAKE_CXX_COMPILER g++)

# Set the target triplet to x64-mingw-static, so that gcc and g++ are used and the external libraries are linked statically
set(VCPKG_TARGET_TRIPLET x64-mingw-static)
set(CMAKE_TOOLCHAIN_FILE $ENV{VCPKG_ROOT}/scripts/buildsystems/vcpkg.cmake)

# Set the project name
project(Benzene)

# Find the external libraries
set(BACKUP_CMAKE_SIZEOF_VOID_P "${CMAKE_SIZEOF_VOID_P}")
set(CMAKE_SIZEOF_VOID_P "")

find_package(SFML COMPONENTS window graphics CONFIG REQUIRED)
find_package(fmt CONFIG REQUIRED)

set(CMAKE_SIZEOF_VOID_P "${BACKUP_CMAKE_SIZEOF_VOID_P}")

# Add the project libraries

# 1. calc library
file(GLOB CALC "src/lib/calc/*.cpp")
add_library(calc STATIC ${CALC})

# 2. renderer library
file(GLOB RENDERER "src/lib/renderer/*.cpp")
add_library(renderer STATIC ${RENDERER})

# Add the executable
add_executable(benzene src/main.cpp)

# Link project libraries
target_link_libraries(benzene PRIVATE calc)
target_link_libraries(benzene PRIVATE renderer)

# Link external libraries
target_link_libraries(benzene PRIVATE sfml-graphics sfml-window)
target_link_libraries(benzene PRIVATE fmt::fmt)
