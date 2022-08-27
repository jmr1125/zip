#include "main-def.cpp"
#include <stdlib.h>

filein::filein(){
};

filein::~filein(){
}

filein::filein(const char *filename){
  fp.open(filename,ios_base::in | ios_base::binary);
  if(!fp.good()){
    fprintf(stderr,"\033[31mERROR: error while open file `%s\'\033[0m\n",filename);
    exit(1);
  }
}

int8_t filein::read_byte(){
  return fp.get();
}

int16_t filein::read_word(){
  int8_t val1=fp.get(),val2=fp.get();
  return (val1<<8)|val2;
}

fileout::fileout(){
}

fileout::fileout(const char *filename){
  fp.open(filename,ios_base::out|ios_base::trunc);
  if(!fp.good()){
    fprintf(stderr,"\033[31mERROR: error while open file `%s\'\n",filename);
    exit(1);
  }
}

void fileout::write_byte(const int8_t & c){
  fp.put(c);
}

void fileout::write_word(const int16_t & c){
  fp.put(c&0xff);
  fp.put((c>>8)&0xff);
}

fileout::~fileout(){
}
