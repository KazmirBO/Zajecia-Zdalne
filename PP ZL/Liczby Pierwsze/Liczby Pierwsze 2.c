/*
Autor: Kolanowski Sebastian
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  int n = 0, i = 1, x = 0, j = 0;
  printf("Podaj zakres: ");
  scanf("%d", &n);
  if (n <= 1) {
    printf("Podana liczba nie moze byc liczba pierwsza.\n");
    return 0;
  }
  for (i = 1; i <= n; i++) {
    x = 0;
    for (j = 1; j <= i; j++) {
      if (i % j == 0) {
        x = x + 1;
      }
    }
    /*if(x>2){
            printf("Liczba %d nie jest liczba pierwsza.\n",i);
    }*/
    if (x == 2) {
      printf("Liczba %d jest liczba pierwsza.\n", i);
    }
  }
  if (x == 2) {
    printf("Podana liczba %d jest liczba pierwsza.\n", n);
  } else {
    printf("Podana liczba %d nie jest liczba pierwsza.\n", n);
  }
  return 0;
}
