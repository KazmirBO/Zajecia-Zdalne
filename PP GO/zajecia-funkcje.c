#include <math.h>
#include <stdio.h>
#include <stdlib.h>
void gwiazdki();
void odleglosc(float x1, float x2, float y1, float y2);
float odleglosc2();
float odleglosc3(float x1, float x2, float y1, float y2);
int main() {
  float x1 = -1.0, y1 = 0.0, x2 = 1.0, y2 = 0.0;
  gwiazdki();
  odleglosc(-1, 1, 0, 0);
  printf("Odleglosc2 = %.2f\n", odleglosc2());
  printf("Odleglosc3 = %.2f\n", odleglosc3(x1, x2, y1, y2));
  printf("\n");
  return 0;
}
void gwiazdki() {
  for (int i = 0; i < 15; i++)
    printf("*");
  printf("\n");
}
void odleglosc(float x1, float x2, float y1, float y2) {
  printf("Odleglosc = %.2f\n", sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2)));
}
float odleglosc2() {
  float x1 = -2.0, y1 = 0.0, x2 = 2.0, y2 = 0.0, wynik;
  wynik = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
  return wynik;
}
float odleglosc3(float x1, float x2, float y1, float y2) {
  return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
}
