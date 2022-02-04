/*
Autor: Kolanowski Sebastian
Temat: Zadanie na lekcji
Data : 16.11.2020
*/
#include <stdio.h>
#include <stdlib.h>
int main() {
  float a, b, c, d;
  char znak;
  fflush(stdin);
  printf("Wybierz:\n\t+ - dodawanie\n\t- - odejmowanie\n\t* - mnozenie\n\t/ - "
         "dzielenie\n");
  znak = getchar();
  printf("Podaj z1:\n");
  printf("Rzeczywista: ");
  scanf("%f", &a);
  printf("Urojona: ");
  scanf("%f", &b);
  printf("Podaj z2:\n");
  printf("Rzeczywista: ");
  scanf("%f", &c);
  printf("Urojona: ");
  scanf("%f", &d);
  switch (znak) {
  case '+':
    printf("Dodawanie liczb z1+z2 wynosi: %.2f+i%.2f", a + c, b + d);
    break;
  case '-':
    printf("Odejmowanie liczb z1-z2 wynosi: %.2f-i%.2f", a - c, b - d);
    break;
  case '*':
    printf("Mnożenie liczb z1*z2 wynosi: %.2f+i%.2f", (a * c) - (b * d),
           (a * d) + (b * c));
    break;
  case '/':
    if ((c * c) + (d * d) > 0)
      printf("Dzielenie liczb z1/z2 wynosi: %.2f+i%.2f",
             ((a * c) + (b * d)) / ((c * c) + (d * d)),
             ((b * c) - (a * d)) / ((c * c) + (d * d)));
    else
      printf("Podano bledne liczby.");
    break;
  default:
    printf("Wybrales bledny znak.");
    break;
  }
  printf("\n");
  return 0;
}
