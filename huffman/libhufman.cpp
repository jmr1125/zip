#include<queue>
#include<vector>

using std::vector;
using std::priority_queue;

template<typename T>
struct HuffmanTree{
  HuffmanTree();
  ~HuffmanTree();
  HuffmanTree *l,*r;
  T val;
  int freq;
  bool operator < (const HuffmanTree &) const;
};

template<typename valT>
HuffmanTree<valT>* create(vector<valT>,vector<int>);

template<typename valT>
void display(HuffmanTree<valT> &);
