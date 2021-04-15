/*
Autor: Kolanowski Sebastian
Projek: Mało-Dużo
Data: 2.12.2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
  srand(time(NULL));
  int a,b,proba=1;
  b=rand()%101;
  printf("Komputer losuje liczbe z akresu od 0 do 100, ktora masz zgadnac.\n");
  do{
    printf("Podaj liczbe: ");
    scanf("%d",&a);
    if(a<b){
      printf("Za malo! Sprobuj ponownie ;)\n");
    }
    else if(a>b){
      printf("Za duzo! Sprobuj ponownie ;)\n");
    }
    proba++;
  }while(a!=b);
  printf("Barvo!\n");
  printf("Udalo ci sie za %d razem.\n",proba);
  return 0;
}
