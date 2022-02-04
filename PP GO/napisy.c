#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
int main() {
  char napis[100];
  fflush(stdin);
  printf("\nPodaj napis: ");
  gets(napis);
  puts(napis);
  int a = 0, b = strlen(napis) - 1, test = 0;
  for (a = 0; a < b; a++) {
    printf("a=%c,b=%c\n", napis[a], napis[b]);
    if (napis[a] != napis[b]) {
      printf("Nie jest palindromem!\n");
      test = 1;
      b = 0;
    }
    b--;
  }
  if (test == 0) {
    printf("Jest palindromem!\n");
  }
  return 0;
}
