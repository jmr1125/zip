#include "FOLib/main-def.cpp"

int main(){
  {
  fileout fout("a.dat");
  fout.write_byte('a');
  fout.write_byte('b');
  fout.write_word(100);
  //fout.write_word(100);
  }
  {
  filein fin("a.dat");
  // char c;
  // fin.read_byte(c);
  // short val;
  // fin.read_word(val);
  // cout<<c<<' '<<val<<endl;
  //printf("%d %d",fin.read_byte(),fin.read_word());
  printf("%d",fin.read_byte());
  printf("%d\n",fin.read_byte());
  //printf("%d,%d",fin.read_byte(),fin.read_byte());
  printf("%d",fin.read_word());
  }
}
