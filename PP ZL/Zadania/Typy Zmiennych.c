#include <conio.h>
#include <stdio.h>
int main() {
  for (int i = 1; i < 40; i++)
    printf("\xC4");
  printf("\ntyp rozmiar (bajty) rozmiar (bity)\n");
  for (int j = 1; j < 40; j++)
    printf("\xC4");
  printf("\nchar \t\t %d \t\t %d\n", sizeof(char), 8 * sizeof(char));
  printf("int \t\t %d \t\t %d\n", sizeof(int), 8 * sizeof(int));
  printf("short \t\t %d \t\t %d\n", sizeof(short), 8 * sizeof(short));
  printf("long \t\t %d \t\t %d\n", sizeof(long), 8 * sizeof(long));
  printf("float \t\t %d \t\t %d\n", sizeof(float), 8 * sizeof(float));
  printf("double \t\t %d \t\t %d\n", sizeof(double), 8 * sizeof(double));
  printf("long double \t %d \t\t %d\n", sizeof(long double),
         8 * sizeof(long double));
  getche();
  return 0;
}
