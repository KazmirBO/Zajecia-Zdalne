/*
Autor: Kolanowski Sebastian
Projekt: Funkcja
Data: 16.12.2020
*/
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
int sumal(int n){
  int suma=0,a=n;
  do{
    suma=suma+a%10;
    a=a/10;
  }while (a>0);
  return suma;
}
int main(){
  srand(time(NULL));
  int n=0;
  n=rand()%10001+100;
  printf("Liczba n wynosi: %d\n",n);
  printf("Suma liczb wynosi: %d.\n",sumal(n));
  return 0;
}
