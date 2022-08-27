#include <stdio.h>
#include <stdint.h>
#include <fstream>

//typedef char int8_t;
//typedef short int16_t;

using std::ifstream;
using std::ofstream;
using std::ios_base;

struct filein{
  filein();
  ~filein();
  filein(const char *filename);
  int8_t read_byte();
  int16_t read_word();
  //bool read_bit();
  ifstream fp;
  //char bb;//Buf of Bit
};

struct fileout{
  fileout();
  ~fileout();
  fileout(const char *filename);
  void write_byte(const int8_t & c);
  void write_word(const int16_t & c);
  //void write_bit(const bool & c);
  ofstream fp;
  //char bb;//Buf of Bit
};
