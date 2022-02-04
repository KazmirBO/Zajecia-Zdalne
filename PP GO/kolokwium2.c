/*
Autor: Kolanowski Sebastian
Projekt: Kolokwium - Zadanie 2
Data 14.12.2020
*/
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int main() {
  int liczba, a = 0, i, j, ile;
  int spr[] = {0, 2, 5, 7, 8};
  do {
    printf("Podaj liczbe z przedzialu(1000-10000): ");
    scanf("%d", &liczba);
  } while (liczba < 1000 || liczba > 10000);
  int temp = liczba;
  do {
    temp = temp / 10;
    a++;
  } while (temp > 1);
  int petla[a];
  printf("%d\n", a);
  temp = liczba;
  for (i = 0; i < a; i++) {
    petla[i] = temp % 10;
    temp = temp / 10;
  }
  for (i = 0; i < 5; i++) {
    ile = 0;
    for (j = 0; j < a; j++) {
      if (spr[i] == petla[j])
        ile++; // Powtarzanie się znakow w tekscie
    }
    printf("\n\t %d --> %d\n", spr[i],
           ile); // Wyswietla znak i ilosc występowania
  }
  scanf("%d", &a);
  return 0;
}
