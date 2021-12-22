#include <stdlib.h>
#include <stdio.h>
int main(){
  int a;
  printf("Podaj liczbe: ");
  scanf("%d", &a);
  if(a%2==0) printf("Liczba jest parzysta.\n");
  else printf("Liczba nie jest parzysta.\n");
  return 0;
}
