#include <stdio.h>
#define ROZMIAR 4
int sum();
int number[ROZMIAR] = {3,6,8,10};
int main()
{
int i, wynik ;
printf ("Druk tablicy tab:\n");
for (i=0; i<ROZMIAR; ++i) printf ("Element numer %d = %d\n", i, number[i]);
wynik = binarySearch(ROZMIAR,8);
printf ("indeks liczby = %d\n",wynik);
return 0;
}
int binarySearch( int n, int liczba) {
int indexLow = 0;
int indexHigh = n - 1;
while (indexHigh - indexLow > 1) {
int indexMiddle = indexLow + (indexHigh - indexLow) / 2;
if (liczba < number[indexMiddle]) {
indexHigh = indexMiddle - 1;
}
else if (liczba > number[indexMiddle]) {
indexLow = indexMiddle + 1;
}
printf ("indeks liczby = %d %d \n",indexLow,indexHigh);
}
return indexLow;
}
