rem cmake -S. -Bbuild -DCMAKE_C_COMPILER="C:/Program Files/LLVM/bin/clang.exe" -DCMAKE_CXX_COMPILER="C:/Program Files/LLVM/bin/clang++.exe" -G"MinGW Makefiles" -DCMAKE_C_FLAGS="--target=i686-pc-mingw32" -DCMAKE_CXX_FLAGS="--target=i686-pc-mingw32" -DCMAKE_C_STANDARD_LIBRARIES=""
rem cmake -S. -Bbuild -DCMAKE_C_COMPILER=clang.exe -DCMAKE_CXX_COMPILER=clang++.exe -G"MinGW Makefiles" -DCMAKE_C_FLAGS="--target=i686-pc-mingw32" -DCMAKE_CXX_FLAGS="--target=i686-pc-mingw32" -DCMAKE_C_STANDARD_LIBRARIES=""
echo off
cls
cmake -S. -Bbuild -DCMAKE_C_COMPILER=C:/MinGW/bin/gcc.exe -DCMAKE_CXX_COMPILER=C:/MinGW/bin/g++.exe -G"MinGW Makefiles"
cmake --build build -j4
