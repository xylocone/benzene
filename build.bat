@echo off

REM Set the triplet environment variable for vcpkg
SET VCPKG_TARGET_TRIPLET=x64-mingw-static

REM Execute CMake

call cmake --preset=default
call cd build && ninja