#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Funkcje.h"
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  clock_t start, stop;
  int N=10000;
  int Malejaco[N];
  int Malejaco2[N];
  int Los[N];
  Wprowadzanie(Malejaco,N);
  Wprowadzanie2(Malejaco2,N);
  Losowanie(Los,N);
  //Wyswietl(Malejaco,N);
  start=clock();
  Babelkowe(Malejaco,N);
  stop=clock();
  //Wyswietl(Malejaco,N);
  double babelkowe1=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Czas: "<<babelkowe1<<std::endl;
  //Wyswietl(Malejaco2,N);
  start=clock();
  Babelkowe(Malejaco2,N);
  stop=clock();
  //Wyswietl(Malejaco2,N);
  double babelkowe2=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Czas: "<<babelkowe2<<std::endl;
  //Wyswietl(Los,N);
  start=clock();
  Babelkowe(Los,N);
  stop=clock();
  //Wyswietl(Los,N);
  double babelkowe3=(double)(stop-start)/ CLOCKS_PER_SEC;
  std::cout<<"Czas: "<<babelkowe3<<std::endl;
  std::cout<<std::endl;
  return 0;
}
