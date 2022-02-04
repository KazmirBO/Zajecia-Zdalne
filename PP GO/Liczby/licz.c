#include "licz.h"
float sort(int ile, float t[]) {
  float pom = 0;
  for (int i = 0; i < ile; i++) {
    for (int j = 0; j < i; j++) {
      if (t[i] > t[j]) {
        pom = t[i];
        t[i] = t[j];
        t[j] = pom;
      }
    }
  }
  return t[0];
}
float max(float a, float b, float c) {
  if (a < b) {
    if (b < c) {
      return c;
    } else {
      return b;
    }
  } else if (a < c) {
    return c;
  } else {
    return a;
  }
}
