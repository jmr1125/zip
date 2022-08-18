#include<queue>
#include<vector>
#include<stddef.h>

using std::vector;
using std::priority_queue;

template<typename T=char>
struct HuffmanTree{
  HuffmanTree();
  ~HuffmanTree();
  HuffmanTree *l,*r;
  T val;
  int freq;
  bool operator < (const HuffmanTree &) const;
};

template<typename valT=char>
HuffmanTree<valT>* create(vector<valT> val,vector<int> freq);

template<typename valT=char>
void display(HuffmanTree<valT> * Tree);
