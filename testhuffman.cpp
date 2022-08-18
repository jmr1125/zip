#include"huffman/libhufman.cpp"
int main(){
  vector<char> c={'a','b','c'};
  vector<int> f={1,2,3};
  display( create<char>(c, f) );
}
