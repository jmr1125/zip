#include"libhufman.cpp"


template<typename T>
HuffmanTree<T>::HuffmanTree(){
  l=r=NULL;
}

template<typename T>
HuffmanTree<T>::~HuffmanTree(){
  if(l){
    delete *l;
  }
  if(r){
    delete *r;
  }
}

template<typename T>
bool HuffmanTree<T>::operator < (const HuffmanTree & rsh) const{
  return freq < rsh.freq;
}

template<typename T=char>
HuffmanTree<T>* create(vector<T> val,vector<int> freq){
  //prorirory_queue<int> que;
  priority_queue <HuffmanTree<T> > que;
  for(auto & i : val){
    HuffmanTree<T>* it=new HuffmanTree<T>;
    it->val=i;
    it->freq=freq.at(i);
    que.push(it);
  }
  while(que.size()!=1){
    HuffmanTree<T> * it1=que.top();
    que.pop();
    HuffmanTree<T> * it2=que.top();
    HuffmanTree<T> * it=new HuffmanTree<T>;
    it->l=it1;
    it->r=it2;
    it->val=-1;
    it->freq = it1->freq + it2->freq;
    que.push(it);
  }
  return que.top();
}
template<typename T>
void display(HuffmanTree<T> * Tree){
  printf("freq: %d , val: %d\n",Tree,Tree->freq,Tree->val);
  if(Tree->l) display(*Tree->l);
  if(Tree->r) display(*Tree->r);
}
