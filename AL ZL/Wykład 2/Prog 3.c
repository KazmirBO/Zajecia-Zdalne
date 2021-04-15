#include <stdio.h>
#define ROZMIAR 4
int sum();
int number[ROZMIAR] = {3,6,8,10};
int main()
{
int i, wynik ;
wynik = sum(ROZMIAR);
printf ("Druk tablicy tab:\n");
for (i=0; i<ROZMIAR; ++i) printf ("Element numer %d = %d\n", i, number[i]);
wynik = sum(ROZMIAR);
printf ("suma szeregu = %d\n",wynik);
return 0;
}
int sum( int numbers) {
int sum1 = 0, i;
if ( numbers == 0) return 0;
for (i=0; i <= ROZMIAR - 1; i++) {
sum1 = sum1 + number[i];
printf("sum1 %d,", sum1);
}
return sum1;
}
