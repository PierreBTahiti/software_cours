mkdir build
cd build
cmake ..
cmake --build .
ctest -C Debug
cd ..