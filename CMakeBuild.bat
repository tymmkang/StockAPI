@echo off

:: Check CMake exists
cmake --version >nul 2>&1
if ERRORLEVEL 1 (
    echo Not found CMake
)

:: Build CMake project
echo. 
cmake -B CMakeBuild
