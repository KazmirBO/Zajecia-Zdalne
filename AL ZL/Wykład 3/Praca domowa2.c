#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int OS(int d[], int i, int p) {
  int tmp;
  if (d[i] > d[i + 1]) {
    tmp = d[i];
    d[i] = d[i + 1];
    d[i + 1] = tmp;
    return i;
  }
  return p;
}
void Los(int tab[], int n) {
  for (int i = 0; i < n; i++)
    tab[i] = rand() % 101;
}
void Wypisz(int tab[], int n) {
  for (int i = 0; i < n; i++)
    printf("tab[%2.d]= %3.d\n", i + 1, tab[i]);
}
int main() {
  srand(time(NULL));
  int n = 50, d[n], p, Pmin = 1, Pmax = n - 1, i;
  Los(d, n);
  Wypisz(d, n);
  do {
    p = 0;
    for (i = Pmin; i <= Pmax; i++)
      p = OS(d, i, p);
    if (p == 0) {
      Wypisz(d, n);
      printf("\nKoniec p==0\n");
      return 0;
    }
    Pmax = p - 1;
    p = 0;
    for (i = Pmax; i >= Pmin; i--)
      p = OS(d, i, p);
    Pmin = p + 1;
  } while (p != 0);
  Wypisz(d, n);
  printf("\n");
  return 0;
}
