#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[]) {
  int d[]={19, 11, 14, 17, 11, 13, 19, 11, 13, 12, 17,
    18, 19, 11, 15, 15, 17, 16, 13, 12, 18, 11};
  int n=sizeof(d)/sizeof(int);
  int Wmin=d[0], Wmax=d[0];
  for(int i=1;i<n;i++){if(Wmin>d[i]) Wmin=d[i];}
  for(int i=1;i<n;i++){if(Wmax<d[i]) Wmax=d[i];}
  printf("Wmin: %d, Wmax: %d\n", Wmin, Wmax);
  for(int i=0;i<n;i++) printf("%d, ", d[i]);
  int l[Wmax-Wmin];
  for(int i=Wmin;i<=Wmax;i++) l[i-Wmin]=0;
  for(int i=0;i<n;i++) l[d[i]-Wmin]++;
  int j=0;
  for(int i=Wmin;i<=Wmax;i++){
    while(l[i-Wmin]--) d[j++]=i;
  }
  printf("\n");
  for(int i=0;i<n;i++) printf("%d, ", d[i]);
  printf("\nZlozonosc czasowa wynosi: O(n^2),");
  printf("\nZlozonosc pamieciowa wynosi: O(n),");
  printf("\n");
  return 0;
}
