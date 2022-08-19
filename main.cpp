#include "huffman/libhufman.cpp"
#include "FOLib/main-def.cpp"
#include <cstring>
#include <cstdlib>
#include <vector>
#include <algorithm>
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
  if(argc==1){
    disphelp(argc,argv);
  }
  bool iflag=false;
  for(int i=0;i<argc;++i){
    if(strcmp(argv[i],"-h")==0){
      iflag=false;
      disphelp(argc,argv);
    }else if(iflag||strcmp(argv[i],"-i")==0){
      iflag=true;
      files.push_back(argv[i+1]);
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
    fprintf(stderr,"\033[33;1mWARRNING: \033[0mThere are same files");
  }
  files.resize(n);
  for(const auto & i : files){
    printf("%s\n",i.c_str());
  }
}
