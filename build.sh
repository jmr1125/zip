cmake -S. -Bbuild -DCMAKE_C_COMPILER="/bin/clang" -DCMAKE_CXX_COMPILER="/bin/clang++" -DCMAKE_PREFIX_PATH="./." -DCMAKE_INSTALL_PREFIX="./build"

cd build
make
cd ..
