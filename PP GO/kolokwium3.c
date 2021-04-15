/*
Autor: Kolanowski Sebastian
Projekt: Kolokwium - Zadanie 3
Data 14.12.2020
*/
#include <stdio.h>
#include <stdlib.h>
//#include <math.h>
int main(){
  int tab[10],i,suma=0;
  tab[0]=1;
  printf("\ntab[0]=%d\n",tab[0]);
  for(i=1;i<10;i++){
    tab[i]=1+2*i;
    printf("tab[%d]=%d\n",i,tab[i]);
  }
  printf("\ntab[0]=%d\n",tab[0]);
  for(i=1;i<10;i++){
    if(tab[i-1]%2==0){
      tab[i]=tab[i]+(tab[i-1]/2);
    }
    if(tab[i-1]%2!=0){
      tab[i]=tab[i]+(tab[i-1]*2);
    }
    printf("tab[%d]=%d\n",i,tab[i]);
  }
  for(i=0;i<10;i++){
    suma=suma+tab[i];
  }
  printf("\nSuma wszystkich liczb wynosi: %d",suma);
  return 0;
}
