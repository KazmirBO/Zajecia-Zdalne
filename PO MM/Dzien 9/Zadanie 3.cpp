#include <iostream>
#include "SimpleVector.h"
int main(int argc, char const *argv[]) {
  const int SIZE=10;
  int count;
  SimpleVector<int> intTable(SIZE);
  SimpleVector<double> doubleTable(SIZE);
  for(count=0;count<SIZE;count++){
    intTable[count]=(count*2);
    doubleTable[count]=(count*3.14);
  }
  std::cout<<std::endl<<"Wartosci w obiekcie intTable: "<<std::endl;
  for(count=0;count<SIZE;count++) std::cout<<intTable[count]<<" ";
  std::cout<<std::endl<<"Wartosci w obiekcie doubleTable: "<<std::endl;
  for(count=0;count<SIZE;count++) std::cout<<doubleTable[count]<<" ";
  std::cout<<std::endl;
  std::cout<<std::endl<<"Dodanie o 5 do elementow intTable i o 3,5 do doubleTable: "<<std::endl;
  for(count=0;count<SIZE;count++){
    intTable[count]=intTable[count]+5;
    doubleTable[count]=doubleTable[count]+3.5;
  }
  std::cout<<std::endl<<"Wartosci w obiekcie intTable: "<<std::endl;
  for(count=0;count<SIZE;count++) std::cout<<intTable[count]<<" ";
  std::cout<<std::endl<<"Wartosci w obiekcie doubleTable: "<<std::endl;
  for(count=0;count<SIZE;count++) std::cout<<doubleTable[count]<<" ";
  std::cout<<std::endl;
  return 0;
}
