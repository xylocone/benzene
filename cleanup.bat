@echo off

REM Delete build artifacts
del /q /s build\*

REM Delete any other build-related directories
rmdir /q /s  build

REM Create the build directory again
mkdir build