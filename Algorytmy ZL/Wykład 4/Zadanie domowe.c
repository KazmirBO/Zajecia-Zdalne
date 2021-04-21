#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void Los(int d[], int n){
  for(int i=0;i<n;i++){
    d[i]=rand()%10+1;
  }
}
void Wyswietl(int d[], int n){
  for(int i=0;i<n;i++) printf("Tab[%2d]: %2d\n", i+1, d[i]);
}
int main(){
  srand(time(NULL));
  int n=10, d[n], j, i, Pmin, tmp=0;
  Los(d, n);
  Wyswietl(d, n);
  for(j=1;j<n;j++){
    for(Pmin=j,i=j+1;i<=n;i++){
      if(d[i]>d[Pmin]) Pmin=i;
    }
    tmp=d[Pmin];
    d[Pmin]=d[j];
    d[j]=tmp;
  }
  Wyswietl(d, n);
  printf("\n");
  return 0;
}
