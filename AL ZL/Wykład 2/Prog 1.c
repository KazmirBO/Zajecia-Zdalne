#include <stdio.h>
#define ROZMIAR 4
int sum();
int number[ROZMIAR] = {3,6,8,10};
int main()
{
int i, wynik ;
wynik = sum(ROZMIAR);
printf ("Druk tablicy tab:\n");
for (i=0; i<ROZMIAR; ++i) {
printf ("Element numer %d = %d\n", i, number[i]);
}
printf ("suma szeregu = %d\n",wynik);
return 0;
}
int sum(numbers)
{
int sum1 = 0;
for (int n = 0; n < numbers; ++n) {
sum1 += number[n];
}
return sum1;
}
