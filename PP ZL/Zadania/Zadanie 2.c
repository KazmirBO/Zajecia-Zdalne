#include <stdio.h>
#include <stdlib.h>
int main() {
  int wynik = 0, sr = 0, ilosc = 0;
  for () {
    printf("Podaj ilosc ocen: ");
    scanf("%d", &ilosc);
    int ocena[ilosc];
    printf("Podaj ocenę (1 do 6 ) \n");
    printf("ocena = ");
    scanf("%d", &ocena);
    switch (ocena) {
    case 6:
      printf("celujący \n");
      break;
    case 5:
      printf("bardzo dobry\n");
      break;
    case 4:
      printf("dobry\n");
      break;
    case 3:
      printf("dostateczny\n");
      break;
    case 2:
      printf("mierny\n");
      break;
    case 1:
      printf("niedostateczny\n");
      break;
    default:
      printf("błąd danych \n");
      break;
    }
    return 0;
  }
