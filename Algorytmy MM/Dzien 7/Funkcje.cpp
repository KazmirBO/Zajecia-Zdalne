#include <iostream>
#include <ctime>
#include "Funkcje.h"
void Wprowadzanie(int tab[], int N){
  for(int i=0;i<N;i++) tab[i]=i+1;
}
void Wprowadzanie2(int tab[], int N){
  for(int i=N;i>0;i--) tab[10-i]=i;
  std::swap(tab[2],tab[7]);
}
void Losowanie(int tab[], int N){
  for(int i=0;i<N;i++) tab[i]=rand()%1000+1;
}
void Wyswietl(int tab[], int N){
  for(int i=0;i<N;i++) std::cout<<tab[i]<<" ";
  std::cout<<std::endl;
}
void Babelkowe(int tab[], int N){
  for(int i=0;i<N;i++){
    for(int j=0;j<N;j++){
      if(tab[i]>tab[j]) std::swap(tab[i],tab[j]);
    }
  }
}
