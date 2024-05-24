@echo off

REM Execute CMake

call cmake --preset=default
call cd build && ninja