#include <stdio.h>
#include <stdlib.h>
#define nl printf("\n")
int main(int argc, char const *argv[]) {
  int n=18,j,k,x;
  int d[]={0, 2, 5, 3, 4, 9, 2, 7, 5, 5, 2, 6, 7, 3, 8, 2, 9, 6, 3};
  for(int i=2;i<=n;i++){
    j=i;
    k=j/2;
    x=d[i];
    while(k>0 && d[k]<x){
        d[j]=d[k];
        j=k;
        k=j/2;
    }
    d[j]=x;
  }
  for(int i=1;i<=n;i++) printf("%d ,",d[i]);
  nl;
  return 0;
}
