/*
Autor   : Kolanowski Sebastian
Projekt : Zadanie 1 Wykład 2
*/
#include <iostream>
void czytaj(int &x, int &y){
  std::cout<<"Podaj x: ";
  std::cin>>x;
  std::cout<<"Podaj y: ";
  std::cin>>y;
}
void wykonaj(int &x1, int &y1){
  std::cout<<"Mnozenie liczb "<<x1<<" oraz "<<y1<<" wynosi: "<<x1*y1<<std::endl;
}
int main(){
  int x,y;
  czytaj(x,y);
  wykonaj(x,y);
  std::cout<<std::endl;
  return 0;
}
