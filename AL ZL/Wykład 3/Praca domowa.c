#include <stdio.h>
#include <stdlib.h>
#include <time.h>
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
  int n = 10, i, p, tmp, Pmin = 1, Pmax = n - 1, d[n];
  Los(d, n);
  Wypisz(d, n);
  do {
    p = 0;
    for (i = Pmin; i <= Pmax; i++) {
      if (d[i] > d[i + 1]) {
        tmp = d[i];
        d[i] = d[i + 1];
        d[i + 1] = tmp;
        if (p == 1)
          Pmin = i;
        p = i;
      }
    }
    if (Pmin > 1)
      Pmin--;
    Pmax = p - 1;
  } while (p != 0);
  Wypisz(d, n);
  printf("\n");
  return 0;
}
