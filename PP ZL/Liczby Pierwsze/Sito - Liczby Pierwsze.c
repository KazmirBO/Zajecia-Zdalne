#include <stdio.h>
#include <stdlib.h>
int main() {
  int n, i, w;
  printf("Podaj zakres: ");
  scanf("%d", &n);
  int tab[n + 1];
  for (i = 2; i <= n; i++) {
    tab[i] = 1;
  }
  for (i = 2; i < n; i++) {
    if (tab[i] == 1) {
      for (w = i * i; w <= n; w = w + i) {
        tab[w] = 0;
      }
    }
  }
  for (i = 2; i <= n; i++) {
    if (tab[i] == 1) {
      printf("%d\n", i);
    }
  }
  return 0;
}
