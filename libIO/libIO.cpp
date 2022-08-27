#include <cstdio>


#define OPEN_ERR 1

typedef char int8;
typedef short int16;

struct IN{
  IN();
  IN(const char*);
  ~IN();
  int8 read_byte();
  int16 read_word();
  FILE* fp=NULL;
};

struct OUT{
  OUT();
  OUT(const char*);
  ~OUT();
  void write(const int8 &);
  void write(const int16 &);
  void flush();
  FILE* fp=NULL;
};
