echo off
echo y > del build
cmake -G"MinGW Makefiles" -DCMAKE_C_COMPILER=C:/MinGW/bin/gcc.exe -DCMAKE_CXX_COMPILER=C:/MinGW/bin/g++.exe -S. -Bbuild
if %errorlevel%==0 (cmake --build build -j12)