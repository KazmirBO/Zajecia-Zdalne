#include <stdio.h>
#define ROZMIAR 10
int sum();
int number[ROZMIAR] = {10,9,8,6, 5,4,3,2,1,0};
int main()
{
int i, wynik ;
wynik = sort(ROZMIAR);
printf ("liczba operacji = %d \n",wynik);
printf ("Druk tablicy tab:\n");
for (i=0; i<ROZMIAR; ++i) printf ("Element numer %d = %d\n", i, number[i]);
return 0;
}
int sort(int n) {
int l = 0, k = 0;
for (int i = 0; i < n; i++) {
for (int j = 0; j < n - 1; j++) {
if (number[j] > number[j + 1]) {
int temp = number[j + 1];
number[j + 1] = number[j];
number[j] = temp;
l++;
}
k++;
}
printf ("liczba operacji = %d, %d \n",k,l);
}
return k;
}
