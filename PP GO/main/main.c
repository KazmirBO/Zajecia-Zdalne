#include "regresja.h"
#include <stdio.h>
#include <stdlib.h>
int main() {
  struct punkt A, B, *t = NULL;
  int n = 5;
  t = (struct punkt *)calloc(n, sizeof(struct punkt));
  t[0].x = -2.5;
  t[0].y = -1.5;
  t[1].x = 1.0;
  t[1].y = 2.0;
  t[2].x = 0.5;
  t[2].y = 0.5;
  t[3].x = 1.0;
  t[3].y = 2.0;
  t[4].x = 1.0;
  t[4].y = 2.0;
  A.x = -1.0;
  A.y = -1.0;
  B.x = 1.0;
  B.y = 1.0;
  printf("\nSuma wynosi: %.2f\n", t[0].x + t[2].x + t[4].x);
  printf("\nOdleglosc miedzy punktami A i B wynosi: %.2f", odl(A, B));
  printf("\nSuma xi wynosi: %.2f", Sx(t, n));
  printf("\nSuma yi wynosi: %.2f", Sy(t, n));
  free(t);
  printf("\n");
  return 0;
}
