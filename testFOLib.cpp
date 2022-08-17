#include "FOLib/main-def.cpp"

int main(){
  {
  fileout fout("a.dat");
  fout.write_byte('a');
  fout.write_word(1000);
  }
  {
  filein fin("a.dat");
  // char c;
  // fin.read_byte(c);
  // short val;
  // fin.read_word(val);
  // cout<<c<<' '<<val<<endl;
  printf("%c %d",fin.read_byte(),fin.read_word());
  }
}
