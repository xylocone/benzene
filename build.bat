@echo off

REM Install dependencies
call ./install.bat

REM Load the .env file
for /f "delims== tokens=1,2" %%i in (.env) do set %%i=%%j

REM Get the path of the bat file
set BAT_FILE_PATH=%VCVARSALL_PATH%

REM Execute the bat file
call %BAT_FILE_PATH% x86

REM Execute CMake
set CC=cl
set CXX=cl

call cmake -S . -B ./build
call cmake --build ./build --config Release