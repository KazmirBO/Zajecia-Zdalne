#include <stdio.h>
#include <stdlib.h>
struct punkt{
  float x;
  float y;
};
int main(){
  struct punkt *t=NULL;
  int n=5;
  t=(struct punkt *)calloc(n,sizeof(struct punkt));
  t[0].x=-1.6;
  t[1].x=-0.8;
  t[2].x=0.0;
  t[3].x=0.8;
  t[4].x=1.6;
  t[0].y=-2.6;
  t[1].y=-1.8;
  t[2].y=0.0;
  t[3].y=1.8;
  t[4].y=2.6;
  printf("\nSuma wynosi: %.2f\n",t[0].x+t[1].x+t[2].x+t[3].x+t[4].x);
  printf("\n");
  return 0;
}
