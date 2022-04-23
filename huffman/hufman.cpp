#include"libhufman.cpp"


template<typename valT>
HuffmanTree<valT>::HuffmanTree(){
  l=r=NULL;
}

template<typename valT>
HuffmanTree<valT>::~HuffmanTree(){
  if(l){
    delete *l;
  }
  if(r){
    delete *r;
  }
}

template<typename valT>
bool HuffmanTree<valT>::operator < (const HuffmanTree & rsh) const{
  return freq < rsh.freq;
}

template<typename valT>
HuffmanTree<valT>* create(vector<valT> val,vector<int> freq){
  //prorirory_queue<int> que;
  priority_queue <int> que;
  for(auto & i : val){
    HuffmanTree<valT>* it=new HuffmanTree<valT>;
    it->val=i;
    it->freq=freq.at(i);
    que.push(it);
  }
  while(que.size()!=1){
    HuffmanTree<valT> * it1=que.top();
    que.pop();
    HuffmanTree<valT> * it2=que.top();
    HuffmanTree<valT> * it=new HuffmanTree<valT>;
    it->l=it1;
    it->r=it2;
    it->val=-1;
    it->freq = it1->freq + it2->freq;
    que.push(it);
  }
  return que.top();
}
