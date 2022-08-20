#include "main-def.cpp"
#include <stdlib.h>

filein::filein(){
  fp=NULL;
};

filein::~filein(){
  if(fp){
    fclose(fp);
  }
  fp=NULL;
}

filein::filein(const char *filename){
  fp=fopen(filename,"rb");
  if(fp==NULL){
    fprintf(stderr,"\033[31mERROR: error while open file `%s\'\033[0m\n",filename);
    exit(1);
  }
}

int8_t filein::read_byte(){
  int8_t val;
  fread(&val,1,1,fp);
  return val;
}

int16_t filein::read_word(){
  int16_t val;
  fread(&val,2,1,fp);
  return val;
}

fileout::fileout(){
  fp=NULL;
}

fileout::fileout(const char *filename){
  fp=fopen(filename,"wb");
  if(fp==NULL){
    fprintf(stderr,"\033[31mERROR: error while open file `%s\'\n",filename);
    exit(1);
  }
}

void fileout::write_byte(const int8_t & c){
  fwrite(&c,1,1,fp);
}

void fileout::write_word(const int16_t & c){
  fwrite(&c,2,1,fp);
}

fileout::~fileout(){
  if(fp){
    fclose(fp);
  }
  fp=NULL;
}
