#include "libIO.cpp"

IN::IN(){
  fp=NULL;
}

IN::IN(const char* filename){
  if((fp=fopen(filename,"rb"))==NULL){
    printf("oh in");
    throw OPEN_ERR;
  }
}

IN::~IN(){
  fclose(fp);
}

int8 IN::read_byte(){
  int8 val=0;
  fread(&val,1,1,fp);
  return val;
}

int16 IN::read_word(){
  int16 val=0;
  fread(&val,2,1,fp);
  return val;
}

OUT::OUT(){
  fp=NULL;
}

OUT::OUT(const char* filename)
{
  if((fp=fopen(filename,"wb"))==NULL){
    printf("oh out");
    throw OPEN_ERR;
  }
}

OUT::~OUT(){
  flush();
  fclose(fp);
}

void OUT::write(const int8 &val){
  fwrite(&val,1,1,fp);
}

void OUT::write(const int16 &val){
  fwrite(&val,2,1,fp);
}

void OUT::flush(){
  fflush(fp);
}
