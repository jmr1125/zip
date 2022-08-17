<<<<<<< HEAD
cmake -S. -Bbuild -DCMAKE_C_COMPILER="/bin/clang" -DCMAKE_CXX_COMPILER="/bin/clang++"
=======
cmake -S. -Bbuild -DCMAKE_C_COMPILER="/bin/clang" -DCMAKE_CXX_COMPILER="/bin/clang++" -DCMAKE_PREFIX_PATH="./." -DCMAKE_INSTALL_PREFIX="./build"

>>>>>>> ac44556d321a72b2640caf29ef0bac9b22ec57f7
cd build
make
cd ..
