/*
Autor: Kolanowski Sebastian
Tytuł: Petle
Data : 14-01-2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
const int N = 10;
void losowanie(int t[]);
void wyswietlanie(int t[]);
void babelkowe(int t[]);
void wybor(int t[]);
void wstawianie(int t[]);
int main() {
  int tab[N], a = 1, znak;
  do {
    printf("\n\nJaki sposob sortowania chcesz przetestowac:\n\t1-Babelkowe\n");
    printf("\t2-Wybor\n\t3-Wstawianie\n\t4-Koniec\n");
    printf("Wybierz [1-4]: ");
    scanf("%d", &znak);
    switch (znak) {
    case 1:
      printf("\nLosowanie:\n");
      losowanie(tab);
      wyswietlanie(tab);
      printf("\nSortowanie:\n");
      babelkowe(tab);
      wyswietlanie(tab);
      break;
    case 2:
      printf("\nLosowanie:\n");
      losowanie(tab);
      wyswietlanie(tab);
      printf("\nSortowanie:\n");
      wybor(tab);
      wyswietlanie(tab);
      break;
    case 3:
      printf("\nLosowanie:\n");
      losowanie(tab);
      wyswietlanie(tab);
      printf("\nSortowanie:\n");
      wstawianie(tab);
      wyswietlanie(tab);
      break;
    case 4:
      printf("KONIEC!\n");
      return 0;
      break;
    default:
      printf("\nWpisales zly znak! Sprobuj ponownie.");
      break;
    }
  } while (a == 1);
  printf("\n");
  return 0;
}
void losowanie(int t[]) {
  srand(time(NULL));
  for (int i = 0; i < N; i++)
    t[i] = rand() % 31 - 20;
}
void wyswietlanie(int t[]) {
  for (int i = 0; i < N; i++) {
    printf("Tab[%2d]: %3d, ", i + 1, t[i]);
  }
}
void babelkowe(int t[]) {
  int pow;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      if (t[i] < t[j]) {
        pow = t[i];
        t[i] = t[j];
        t[j] = pow;
      }
    }
  }
}
void wybor(int t[]) {
  int pmin = 0, pow = 0;
  for (int i = 0; i < N - 1; i++) {
    pmin = i;
    for (int j = i + 1; j < N; j++)
      if (t[j] < t[pmin])
        pmin = j;
    pow = t[pmin];
    t[pmin] = t[i];
    t[i] = pow;
  }
}
void wstawianie(int t[]) {
  int j = 0, x = 0;
  for (int i = N - 2; i >= 0; i--) {
    x = t[i];
    j = i + 1;
    while ((j < N) && (x > t[j])) {
      t[j - 1] = t[j];
      j++;
    }
    t[j - 1] = x;
  }
}
