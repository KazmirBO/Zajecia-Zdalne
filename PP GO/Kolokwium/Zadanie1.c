#include <math.h>
#include <stdio.h>
#include <stdlib.h>
struct wek {
  float x, y, z;
};
void ina(struct wek *a);
void inb(struct wek *b);
void skalar(struct wek a, struct wek b);
void wektor(struct wek a, struct wek b);
void dlugosc(struct wek a, struct wek b);
int main() {
  struct wek a, b;
  int znak;
  printf("Podaj wektor a:\n");
  ina(&a);
  printf("Podaj wektor b:\n");
  inb(&b);
  do {
    printf("1- Iloczyn skalarny dwoch wektorow,\n");
    printf("2- Iloczyn wektorowy dwoch wektorow,\n");
    printf("3- Dlugosc wektorow,\n");
    printf("4- Koniec,\n");
    printf("Wybierz:");
    scanf("%d", &znak);
    switch (znak) {
    case 1:
      skalar(a, b);
      break;
    case 2:
      wektor(a, b);
      break;
    case 3:
      dlugosc(a, b);
      break;
    case 4:
      printf("KONIEC!!!\n");
      return 0;
      break;
    default:
      printf("Wybrales zly znak!\n");
      break;
    }
  } while (znak != 4);
  printf("\n");
  return 0;
}
void ina(struct wek *a) {
  scanf("%f", &a->x);
  scanf("%f", &a->y);
  scanf("%f", &a->z);
}
void inb(struct wek *b) {
  scanf("%f", &b->x);
  scanf("%f", &b->y);
  scanf("%f", &b->z);
}
void skalar(struct wek a, struct wek b) {
  float wynik = 0;
  wynik = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);
  printf("Wynik iloczynu skalarnego to:%.2f\n", wynik);
}
void wektor(struct wek a, struct wek b) {
  float cx, cy, cz;
  cx = ((a.y * b.z) - (a.z * b.y));
  cy = ((a.z * b.x) - (a.x * b.z));
  cz = ((a.x * b.y) - (a.y * b.x));
  printf("Wynik to c=[%.2f,%.2f,%.2f]\n", cx, cy, cz);
}
void dlugosc(struct wek a, struct wek b) {
  float da, db;
  da = fabs(sqrt(pow(a.x, 2) + pow(a.y, 2) + pow(a.z, 2)));
  db = fabs(sqrt(pow(b.x, 2) + pow(b.y, 2) + pow(b.z, 2)));
  printf("Dlugosc wektora a to:%.2f\nDlugosc wektora b to:%.2f\n", da, db);
}
