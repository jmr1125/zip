#include"libIO.cpp"
#include<stdio.h>

#include<iostream>

int main(){
  //{
  OUT fout("a.txt");
  fout.write((int8)'a');
  fout.write((int16)255);
  fout.flush();
  // getchar();
  //}
  IN fin("a.txt");
  // printf("%d\n",(fin.fp==NULL));
  // printf("%d\n%d\n",fin.read_byte(),fin.read_word());
  // while(true){
  //   int16 c=fin.read_word();
  //   if(c==EOF){
  //     break;
  //   }
  //   printf("%d ",(int)c);
  // }
  // char c;
  // fread(&c,1,1,fin.fp);
  // printf("%d\n",c);


  // freopen("a.txt","rb",stdin);
  // std::cin>>c;
  // std::cout<<(int)c<<std::endl;
  // return 0;
  printf("%c %d",fin.read_byte(),fin.read_word());
  return 0;
}
