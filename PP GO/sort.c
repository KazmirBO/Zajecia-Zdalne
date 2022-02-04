/*
Autor: Kolanowski Sebastian
Projekt: Sort
Data: 05.12.2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int a = 0, temp = 0, suma = 0, mniej = 0, wiecej = 0;
  printf("Podaj ilosc liczb: ");
  scanf("%d", &a);
  int tab[a];
  int k, j;
  printf("\nPrzed sortowaniem: \n");
  for (k = 0; k < a; k += 2) {
    tab[k] = rand() % 81 - 20;
    suma = suma + tab[k];
    printf("\tTab[%2d]= %3d", k + 1, tab[k]);
    if (tab[k] < 0)
      mniej++;
    else
      wiecej++;
    if (a % 2 != 0) {
      if (k + 2 < a) {
        tab[k + 1] = rand() % 81 - 20;
        suma = suma + tab[k + 1];
        printf("\tTab[%2d]= %3d\n", k + 2, tab[k + 1]);
        if (tab[k + 1] < 0)
          mniej++;
        else
          wiecej++;
      } else
        printf("\n");
    } else if (a % 2 == 0) {
      tab[k + 1] = rand() % 81 - 20;
      suma = suma + tab[k + 1];
      printf("\tTab[%2d]= %3d\n", k + 2, tab[k + 1]);
      if (tab[k + 1] < 0)
        mniej++;
      else
        wiecej++;
    }
  }
  for (k = 0; k < a; k++) {
    for (j = 0; j < k; j++) {
      if (tab[k] < tab[j]) {
        temp = tab[k];
        tab[k] = tab[j];
        tab[j] = temp;
      }
    }
  }
  printf("\nPo sortowaniu: \n");
  for (k = 0; k < a; k += 2) {
    printf("\tTab[%2d]= %3d", k + 1, tab[k]);
    if (a % 2 != 0) {
      if (k + 2 < a) {
        printf("\tTab[%2d]= %3d\n", k + 2, tab[k + 1]);
      } else
        printf("\n");
    } else if (a % 2 == 0) {
      printf("\tTab[%2d]= %3d\n", k + 2, tab[k + 1]);
    }
  }
  printf("\nSuma wszystkich liczb wynosi: %d\n", suma);
  printf("\nSrednia arytmetyczna wszystkich liczb wynosi: %d\n", suma / a);
  printf("\nLiczb ujemnych jest: %d\n", mniej);
  printf("\nLiczb dodatnich jest: %d\n", wiecej);
  printf("\nNajwieksza wartosc to: %d\n", tab[a - 1]);
  printf("\nNajmniejsza wartosc to: %d\n\n", tab[0]);
  return 0;
}
