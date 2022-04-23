cmake -S. -Bbuild -DCMAKE_C_COMPILER="/bin/clang" -DCMAKE_CXX_COMPILER="/bin/clang++"
cd build
make
cd ..
