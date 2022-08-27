#include"libhufman.cpp"
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <functional>


using std::priority_queue;
using std::map;
using std::vector;
using std::less;

HuffmanTree::HuffmanTree(){
  l=r=NULL;
}

HuffmanTree::~HuffmanTree(){
  if(l){
    delete l;
  }
  if(r){
    delete r;
  }
}

bool HuffmanTree::operator < (const HuffmanTree &rsh) const{
  return freq < rsh.freq;
}

struct cmp{
  inline operator < (const HuffmanTree * lsh
};

HuffmanTree* create(map<char,int> mp){
  //prorirory_queue<int> que;
  priority_queue <HuffmanTree* ,vector<HuffmanTree*> ,cmp > que;
  for(auto & i : mp){
    auto * it = new HuffmanTree;
    it->val=i.first;
    it->freq=i.second;
    que.push(it);
    //printf("%c %d\n",it->val,it->freq);
  }
  //printf("ok\n");
  while(que.size()!=1){
    HuffmanTree * it1=que.top();
    que.pop();
    HuffmanTree * it2=que.top();
    que.pop();
    printf("%3d %3d %3d %3d\n",(int)it1->val,it1->freq,(int)it2->val,it2->freq);
    HuffmanTree * it=new HuffmanTree;
    it->l=it1;
    it->r=it2;
    it->val=-1;
    it->freq = it1->freq + it2->freq;
    que.push(it);
  }
  return que.top();
}
void display(HuffmanTree * Tree,string code){
  if(Tree->val!=-1){
    printf("freq: %3d ,\tval: %3d,\tcode: %s\n",Tree->freq,Tree->val,code.c_str());
  }
  if(Tree->l) display(Tree->l,code + "0");
  if(Tree->r) display(Tree->r,code + "1");
}
