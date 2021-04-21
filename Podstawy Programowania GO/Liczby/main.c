/*
Autor: Kolanowski Sebastian
Projekt: Praca domowa
Data: 31.01.2021
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
#include "licz.h"
int main(){
  srand(time(NULL));
  FILE *plik=NULL;
  struct kolumna li;
  char nazwa[20];
  int ilosc=rand()%11+10;
  int x,pom,temp=0;
  float kolumna1[ilosc],kolumna2[ilosc],kolumna3[ilosc];
  printf("Podaj nazwe pliku: ");
  gets(nazwa);
  strcat(nazwa,".txt");
  plik=fopen(nazwa,"w");
  if(plik==NULL){
    printf("Nie mozna otworzyc pliku!\n");
    exit(1);
  }
  printf("Nazwa pliku: %s\n", nazwa);
  printf("Ilosc liczb:%d\n", ilosc);
  for(int i=0;i<ilosc;i++){
    li.kol1=rand()/(rand()*1.0);
    li.kol2=rand()/(rand()*1.0);
    li.kol3=rand()/(rand()*1.0);
    if(i==ilosc-1){
      fprintf(plik, "%.2f %.2f %.2f", li.kol1,li.kol2,li.kol3);
    } else {
      fprintf(plik, "%.2f %.2f %.2f\n", li.kol1,li.kol2,li.kol3);
    }
  }
  fclose(plik);
  plik=fopen(nazwa,"r");
  while (fscanf(plik,"%f %f %f",&li.l1,&li.l2,&li.l3)!=EOF){
    printf("%8.2f %8.2f %8.2f", li.l1,li.l2,li.l3);
    printf("\tNajwieksza w wierszu: %7.2f\n",max(li.l1,li.l2,li.l3));
    kolumna1[temp]=li.l1;
    kolumna2[temp]=li.l2;
    kolumna3[temp]=li.l3;
    temp++;
  }
  printf("Ilosc liczb: %d\n", temp);
  printf("Najwieksza liczna w kolumnie 1 to: %.2f\n",sort(ilosc,kolumna1));
  printf("Najwieksza liczna w kolumnie 2 to: %.2f\n",sort(ilosc,kolumna2));
  printf("Najwieksza liczna w kolumnie 3 to: %.2f\n",sort(ilosc,kolumna3));
  fclose(plik);
  printf("\n");
  return 0;
}
