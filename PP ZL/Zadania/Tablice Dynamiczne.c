#include <stdio.h>
#include <stdlib.h>
int main() {
  int n;
  printf("\nPodaj wartosc n:");
  scanf("%d", &n);                        // ilosc elementow tablicy
  float *tab;                             // wskaznik na typ danych float
  tab = (float *)malloc(n * sizeof *tab); // przydzielenie pamieci dla tablicy
  for (int i = 0; i < n; i++) {
    tab[i] = 0.0; // wypelnienie tablicy zerami
  }
  for (int i = 0; i < n; i++) {
    printf("tab[%2d] = %.2f\n", i + 1, tab[i]); // wyswietla zwartosc tablicy
  }
  free(tab); // zwalnia pamiec
  printf("\n");
  return 0;
}
