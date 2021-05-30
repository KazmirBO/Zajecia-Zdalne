#include <stdio.h>
#include <stdlib.h>
#define nl printf("\n")
int main(int argc, char const *argv[]) {
  int n=18,j,k,x,tmp,m;
  int d[]={0, 9 ,9 ,8 ,6 ,5 ,7 ,7 ,6 ,5 ,2 ,4 ,2 ,3 ,3 ,2 ,2 ,5 ,3};
  for(int i=n;i>1;i--){
    tmp=d[1];
    d[1]=d[i];
    d[i]=tmp;
    j=1;
    k=2;
    while(k<i){
      if((k+1<i) && (d[k+1]>d[k])) m=k+1;
      else m=k;
      if(d[m]<=d[j]) break;
      else{
        tmp=d[j];
        d[j]=d[m];
        d[m]=tmp;
        j=m;
        k=j+j;
      }
    }
  }
  for(int i=1;i<=n;i++) printf("%d ,",d[i]);
  nl;
  return 0;
}
