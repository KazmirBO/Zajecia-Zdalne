#include "regresja.h"
#include <math.h>
float odl(struct punkt A, struct punkt B) {
  float d;
  d = sqrt(pow((A.x - B.x), 2) + ((A.y - B.y) * (A.y - B.y)));
  return d;
}
float Sx(struct punkt t[], int n) {
  float suma = 0.0;
  for (int i = 0; i < n; i++) {
    suma += t[i].x;
  }
  return suma;
}
float Sy(struct punkt t[], int n) {
  float suma = 0.0;
  for (int i = 0; i < n; i++) {
    suma += t[i].y;
  }
  return suma;
}
