#include "huffman/libhufman.cpp"
#include "FOLib/main-def.cpp"
#include <cstring>
#include <cstdlib>
#include <stdio.h>
#include <vector>
#include <algorithm>
#include <cstdio>
using std::vector;
void disphelp(int argc,char**argv){
    fprintf(stderr,"%s\n",argv[0]);
    fprintf(stderr,"---===help===---\n");
    fprintf(stderr,"|\033[32;1m-h\033[0m  display help\n");
    fprintf(stderr,"|\033[32;1m-o\033[0m  output file\n");
    exit(0);
}
vector<string> files;
void args(int argc,char**argv){
  // printf("%d\n",argc);
  if(argc==1){
    disphelp(argc,argv);
  }
  bool flag=false;
  for(int i=0;i<argc;++i){
    if(strcmp(argv[i],"-h")==0){
      flag=false;
      disphelp(argc,argv);
    }else if(flag||strcmp(argv[i],"-i")==0){
      flag=true;
      // printf("\"%s\"\n",argv[i]);
      ++i;
      files.push_back(argv[i]);
    }else{
      continue;
    }
  }
}
int main(int argc,char**argv){
  args(argc,argv);
  sort(files.begin(),files.end());
  int n=std::distance(files.begin(),std::unique(files.begin(),files.end()));
  if(n!=files.size()){
    fprintf(stderr,"\033[33;1mWARRNING: \033[0mThere are same files\n");
  }
  files.resize(n);
  // for(const auto & i : files){
  //   printf("%s\n",i.c_str());
  // }
  for(const auto & i : files){
    printf("\033[38mcompressing \033[39m%s\033[0m\n",i.c_str());
    map<char,int> freq;
    char c;
    filein f(i.c_str());
    while(f.fp.good()){
      c=f.read_byte();
      freq[c]++;
    }
    auto it = create(freq);
    display(it);
  }
}
