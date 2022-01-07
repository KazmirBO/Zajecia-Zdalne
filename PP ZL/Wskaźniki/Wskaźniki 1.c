#include <stdio.h>
#include <stdlib.h>
int main() {
  int a = 2;        // deklaracja a z wartoscia 2
  int *wsk1 = &a;   // wsk1 wskazuje zmienna a
  int *wsk2 = wsk1; // wsk2 wskazuje wskaznik wsk1
  printf("\nWartosci:\n\tWSK2 = %d\tWSK1 = %d\ta = %d\n", *wsk2, *wsk1, a);
  printf("\nAdresy:\n\tWSK2 = %p\n\tWSK1 = %p\n\ta = %p\n", &wsk2, &wsk1, &a);
  printf("\n");
  return 0;
}
