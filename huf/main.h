#include<vector>
#include<utilities>
using std::vector;
using std::pair;
struct huftreenode{
  huftreenode();
  ~huftreenode();
  huftreenode *l, *r;
};
struct huftree{
  huftree();
  ~huftree();
  huftreenode * tree;
};
huftree* build(vector<pair<int,char> >);
