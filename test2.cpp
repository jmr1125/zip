#include"huffman/libhufman.cpp"
int main(){
  map<char,int> mp = {{'a',1},{'b',2},{'c',3}};
  auto root=create(mp);
  display(root);
}
