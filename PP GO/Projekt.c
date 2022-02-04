#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int n;
  printf("Podaj n:");
  scanf("%d", &n);
  int tab[n];
  double suma;
  for (int i = 0; i < n; i++) {
    tab[i] = rand();
    suma = suma + tab[i];
  }
  printf("Srednia arytmetyczna wynosi: %0.2f", (suma / n));
  return 0;
}
