#include "Naglowek 2.h"
#include <iostream>
int main(int argc, char const *argv[]) {
  double width;
  double length;
  // bool tryAgain=true;
  Rectangle myRectangle;
  std::cout << "Podaj szerokosc: ";
  std::cin >> width;
  std::cout << "Podaj dlugosc: ";
  std::cin >> length;
  try {
    myRectangle.setWidth(width);
    myRectangle.setLength(length);
    std::cout << "Pole prostokata: " << myRectangle.getArea() << std::endl;
  } catch (Rectangle::UjemnyWidth e) {
    std::cout << "Blad: liczba " << e.getValue()
              << " jest bledna szerokoscia prostokata" << std::endl;
  } catch (Rectangle::UjemnyLength e) {
    std::cout << "Blad: liczba " << e.getValue()
              << " jest bledna dlugoscia prostokata" << std::endl;
  }
  /*
  std::cout<<"Podaj szerokosc: ";
  std::cin>>width;
  while(tryAgain){
    try{
      myRectangle.setWidth(width);
      tryAgain=false;
    }catch(Rectangle::UjemnyWidth){
      std::cout<<"Blad, podana szerokosc jest ujemna!"
      "\nPodaj wartosc NIEUJEMNA: ";
      std::cin>>width;
    }
  }
  tryAgain=true;
  std::cout<<"Podaj dlugosc: ";
  std::cin>>length;
  while(tryAgain){
    try{
      myRectangle.setLength(length);
      tryAgain=false;
    }catch(Rectangle::UjemnyLength){
      std::cout<<"Blad, podana dlugosc jest ujemna!"
      "\nPodja wartosc NIEUJAMNA: ";
      std::cin>>length;
    }
  }
  std::cout<<"Pole prostokata: "<<myRectangle.getArea()<<std::endl;
  */
  std::cout << "Koniec Programu" << std::endl;
  std::cout << std::endl;
  return 0;
}
