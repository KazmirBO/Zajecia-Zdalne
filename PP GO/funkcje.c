#include <stdio.h>
#include <stdlib.h>
int nwd(int a, int b);
int main() {
  nwd(48, 36);
  return 0;
}
int nwd(int a, int b) {
  while (a != b) {
    if (a > b)
      a = a - b;
    else
      b -= a;
  }
  return a;
}
