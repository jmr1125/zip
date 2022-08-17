#include <stdio.h>

typedef __int8_t int8_t;
typedef __int16_t int16_t;


struct filein{
  filein();
  ~filein();
  filein(const char *filename);
  int8_t read_byte();
  int16_t read_word();
  //bool read_bit();
  FILE* fp;
  //char bb;//Buf of Bit
};

struct fileout{
  fileout();
  ~fileout();
  fileout(const char *filename);
  void write_byte(const int8_t & c);
  void write_word(const int16_t & c);
  //void write_bit(const bool & c);
  FILE* fp;
  //char bb;//Buf of Bit
};