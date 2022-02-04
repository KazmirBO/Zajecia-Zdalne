#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
  srand(time(NULL));
  int a, komp = 0, user = 0;
  char z = 'n', k, koniec;
  do {
    printf("Wybierz: k - kamien, p - papier, n - nozyce: ");
    scanf("%c", &z);
    printf("\n\tUzytkownik:\n");
    switch (z) {
    case 'k':
      printf("\tKamien\n");
      break;
    case 'p':
      printf("\tPapier\n");
      break;
    case 'n':
      printf("\tNozyce\n");
      break;
    }
    a = rand() % 3;
    printf("\n\tKomputer:\n");
    switch (a) {
    case 0:
      printf("\tKamien\n");
      k = 'k';
      break;
    case 1:
      printf("\tPapier\n");
      k = 'p';
      break;
    case 2:
      printf("\tNozyce\n");
      k = 'n';
      break;
    }
    if ((z == 'k' && k == 'p') || (z == 'p' && k == 'n') ||
        (z == 'n' && k == 'k')) {
      printf("\n\tWygral komputer.\n");
      komp++;
    } else if ((z == 'k' && k == 'n') || (z == 'p' && k == 'k') ||
               (z == 'n' && k == 'p')) {
      printf("\n\tWygral uzytkownik.\n");
      user++;
    } else if (z == k) {
      printf("\n\tRemis!\n");
    } else {
      printf("\n\twybrales zly znak!\n");
    }
    printf("\n\tWynik:\n\tUzytkownik: %d\n\tKomputer: %d\n", user, komp);
    printf("\n\tCzy chcesz kontynuowac? (T/N): ");
    scanf("%c", &koniec);
    printf("\n\n");
  } while ((user < 5 && komp < 5) && (koniec != 'n' && koniec != 'N'));
  return 0;
}
