#include <iostream>
#include <cstdlib>
#include <ctime>
#include "vect.h"
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  double direction;
  Vector step;
  Vector result(0,0);
  unsigned long steps=0;
  double target;
  double dstep;
  std::cout<<"Podaj dystans do przejscia(k, zakoncz): ";
  while(std::cin>>target){
    std::cout<<"Podaj dlugosc kroku: ";
    if(!(std::cin>>dstep)) break;
    while(result.magval()<target){
      direction=rand()%360;
      step.set(dstep,direction,'p');
      result=result+step;
      steps++;
    }
    std::cout<<"Po "<<steps<<" krokach osiagnieto polozenie:"<<std::endl;
    std::cout<<result<<std::endl;
    result.polar_mode();
    std::cout<<"czyli:"<<std::endl<<result<<std::endl;
    std::cout<<"Srednia dlugosc kroku = "<<result.magval()/steps<<std::endl;
    result.set(0,0);
    std::cout<<"Podaj dystans przejscia(k, konczy): ";
  }
  std::cout<<"Koniec."<<std::endl;
  std::cout<<std::endl;
  return 0;
}
