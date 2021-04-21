#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "funkcje.h"
void Los(int tab[], int n, int lowest, int maximum){
  if(lowest<0) maximum-=(lowest+1);
  for(int i=0;i<n;i++) tab[i]=rand()%maximum+1+lowest;
}
void Wypisz(int tab[], int n){
  for(int i=0;i<n;i++) printf("tab[%2.d]= %3.d\n",i+1,tab[i]);
}
void Babelkowe(int tab[], int n){
  int tmp;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(tab[j]<tab[i]){
        tmp=tab[j];
        tab[j]=tab[i];
        tab[i]=tmp;
      }
    }
  }
}
void Insertion(int tab[], int n){
  int tmp;
  for(int i=1;i<n;i++){
    tmp=tab[i];
    for(int j=i-1;j>=0 && tab[j]>tmp;j--){
      tab[j+1]=tab[j];
      tab[j]=tmp;
    }
  }
}
