#include <stdio.h>
#include <stdlib.h>
int main() {
  int i, tab[3];
  printf("Podaj 3 liczby: ");
  for (i = 0; i < 3; i++) {
    scanf("%d", &tab[i]);
  }
  if (tab[0] < 0 || tab[1] < 0 || tab[2] < 0)
    printf("W ciagu 3 liczb wystepuje liczba ujemna.\n");
  else
    printf("W ciagu 3 liczb nie wystepuje liczba ujemna.\n");
  return 0;
}
