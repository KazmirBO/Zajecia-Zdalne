#include <stdlib.h>
#include <stdio.h>
#define nl printf("\n")
int main(int argc, char const *argv[]) {
  int d[]={2, 5, 3, 4, 9, 2, 7, 5, 5, 2, 6, 7, 3, 8, 2, 9, 6, 3};
  int n=sizeof(d)/sizeof(int);
  for(int i=2;i<=n;i++)
  nl;
  return 0;
}
