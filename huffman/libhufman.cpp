#include<queue>
#include<vector>
#include<stddef.h>
#include<map>

using std::map;
using std::string;

struct HuffmanTree{
  using T=char;
  HuffmanTree();
  ~HuffmanTree();
  HuffmanTree *l,*r;
  T val;
  int freq;
  bool operator < (const HuffmanTree &) const;
};


HuffmanTree* create(map<char,int> mp);

void display(HuffmanTree * Tree,string code = "");
