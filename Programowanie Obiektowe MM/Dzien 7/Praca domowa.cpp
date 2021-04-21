#include <iostream>
#include "data.h"
int main(int argc, char const *argv[]) {
  int Przesuniecie;
  Data DataOld(2022,1,1,10,10);
  Data DataNew;
  std::cout<<DataOld<<std::endl;
  std::cin>>Przesuniecie;
  DataNew.Zmien_czas(Przesuniecie);
  DataOld=DataOld-DataNew;
  DataOld=DataOld-DataNew;
  DataOld.Odejmowanie();
//  DataOld.Dodawanie();
  std::cout<<DataOld<<std::endl;
  std::cout<<std::endl;
  return 0;
}
