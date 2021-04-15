#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int n;
  printf("Podaj");
  int tab[],suma=0,i,j;
  for(i=0;i<n;i++){
    tab[i]=rand();
    suma=suma+tab[i];
  }
  for(j=0;j<n;j++)
  printf("Srednia arytmetyczna wynosi: %0.2f",suma/i);
  return 0;
}
