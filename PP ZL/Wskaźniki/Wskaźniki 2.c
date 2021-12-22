#include <stdio.h>
int main() {
  int z1, *wsk1;
  char znak1 = 'a', znak2, *wsk_znak = &znak1;
  z1 = 20;
  wsk1 = &z1; // skojarzenie wskaźnika *wsk1 ze zmienną z1
  printf("Drukujmy wartosc zmiennej z1: %d \n adres zmiennej z1: %8i \nadres "
         "wskaźnika wsk1: %8i \n wyłuskana wartość zmiennej *wsk1 %d \n",
         z1, wsk1, &wsk1, *wsk1);
  printf("Drukujmy wartosc zmiennej znak1: %d \n adres zmiennej znak1: %8i\n "
         "adres wskaźnika wsk_znak: %8i \n wyłuskana wartość zmiennej "
         "*wsk_znak %d\n",
         znak1, wsk_znak, &wsk_znak, *wsk_znak);
  *wsk1 = 50; // przypisanie równoważne z1=50
  printf(
      "Drukujmy ponownie wartosc zmiennej z1: %d \n adres zmiennej z1:%8i \n "
      "adres wskaźnika &wsk1: %8i \n wyłuskana wartość zmiennej *wsk1 %d\n",
      z1, wsk1, &wsk1, *wsk1);
  znak2 = *wsk_znak; // przypisanie równoważne znak2=znak1
  z1 = *wsk_znak;    /*przypisanie dopuszczalne, z1 przyjmie wart.
       kodu ASCII znaku wskazywanego przez *wsk_znak; operacja
       odwrotna jest niedopuszczalna*/
  printf("Drukujmy ponownie wartosc zmiennej : %d \n adres zmiennej: %8i "
         "\nadres wskaznika: %8i \n wyłuskana wartość zmiennej %d \n",
         *wsk_znak, wsk_znak, &wsk_znak, *wsk1);
  scanf("%d", z1);
  return 0;
}
