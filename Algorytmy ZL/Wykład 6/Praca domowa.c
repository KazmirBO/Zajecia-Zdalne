#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n=80;
  int d[n];
  int Wmin=-99, Wmax=99;
  for(int i=0;i<n;i++) d[i]=rand()%199-99;
  for(int i=0;i<n;i++) printf("%d\n", d[i]);
  int l[Wmax-Wmin];
  for(int i=Wmin;i<=Wmax;i++) l[i-Wmin]=0;
  for(int i=0;i<n;i++) l[d[i]-Wmin]++;
  int j=1;
  for(int i=Wmin;i<=Wmax;i++){
    while(l[i-Wmin]--) d[j++]=i;
  }
  printf("\n");
  printf("\n");
  for(int i=0;i<n;i++) printf("%d\n", d[i]);
  printf("\n");
  return 0;
}
