#include <stdio.h>
#include <stdlib.h>
int main() {
  int n = 0, i = 1, x = 0, j = 0;
  printf("Podaj zakres: ");
  scanf("%d", &n); // wprowadzenie zmiennej
  if (n <= 1) {
    printf("Podana liczba nie moze byc liczba pierwsza.\n");
    return 0;
  }
  while (i <= n && i > 0) {
    if (n % i == 0) {
      x++; // sprawdzenie czy liczba jest podzielna prze zmienna i
    }
    i++;
  }
  /*	for(i;i<=n;i++){
                  if(n%i==0){
                          x++; //sprawdzenie czy liczba jest podzielna prze
     zmienna i printf("%d ... %d\n",x,i);
                  }
          }
  */
  if (x == 2) {
    printf("Podana liczba %d jest liczba pierwsza.\n", n);
  } else {
    printf("Podana liczba %d nie jest liczba pierwsza.\n", n);
  }
  return 0;
}
