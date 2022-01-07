#include <math.h>
#include <stdio.h>
#include <stdlib.h>
int main() {
  float a, b, c, delta, x1, x2;
  scanf("%f", &a);
  scanf("%f", &b);
  scanf("%f", &c);
  delta = (b * b) - 4 * a * c;
  if (delta > 0) {
    x1 = (-b - sqrt(delta)) / (2 * a);
    x2 = (-b + sqrt(delta)) / (2 * a);
    printf("X1 wynosi: %f, oraz X2 wynosi: %f.\n", x1, x2);
  } else if (delta == 0) {
    x1 = (-b) / (2 * a);
    printf("X wynosi: %f.\n", x1);
  } else
    printf("Brak miejsc zerowych.\n");
  return 0;
}
