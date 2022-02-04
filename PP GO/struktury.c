#include <stdio.h>
#include <stdlib.h>
void dodawanie(float a, float b, float c, float d);
struct ulamek {
  float m;
  float l;
};
int main() {
  int a;
  struct ulamek ulamek1;
  struct ulamek ulamek2;
  do {
    printf("\nPodaj licznik pierwszego ulamku: ");
    scanf("%f", &ulamek1.l);
    printf("\nPodaj mianownik pierwszego ulamku: ");
    scanf("%f", &ulamek1.m);
    printf("\nPodaj licznik drugiego ulamku: ");
    scanf("%f", &ulamek2.l);
    printf("\nPodaj mianownik drugiego ulamku: ");
    scanf("%f", &ulamek2.m);
    printf("\nCo chcesz zrobic:\n");
    printf("\t1-Dodawanie,\n\t2-Odejmowanie,\n\t3-Mnozenie,\n\t4-Dzielenie,"
           "\n\t5-Koniec.\n");
    printf("\nCo chcesz zrobic: ");
    scanf("%d", &a);
    switch (a) {
    case 1: {
      printf("\n\tWynik dodawania ulamkow wynosi: %0.2f\n",
             ((ulamek1.l * ulamek2.m) + (ulamek1.m * ulamek2.l)) /
                 (ulamek1.m * ulamek2.m));
      break;
    }
    case 2: {
      printf("\n\tWynik odejmowania ulamkow wynosi: %0.2f\n",
             ((ulamek1.l * ulamek2.m) - (ulamek1.m * ulamek2.l)) /
                 (ulamek1.m * ulamek2.m));
      break;
    }
    case 3: {
      printf("\n\tWynik mnozenia ulamkow wynosi: %0.2f\n",
             (ulamek1.l * ulamek2.l) / (ulamek1.m * ulamek2.m));
      break;
    }
    case 4: {
      printf("\n\tWynik dzielenia ulamkow wynosi: %0.2f\n",
             (ulamek1.l * ulamek2.m) / (ulamek1.m * ulamek2.l));
      break;
    }
    case 5: {
      printf("\nKONIEC!!!\n");
      return 0;
    }
    }
  } while (a != 5);
  printf("\n");
  return 0;
}
