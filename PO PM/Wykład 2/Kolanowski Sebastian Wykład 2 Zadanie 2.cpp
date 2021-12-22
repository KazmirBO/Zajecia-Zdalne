/*
Autor   : Kolanowski Sebastian
Projekt : Zadanie 1 Wykład 2
*/
#include <iostream>
#define PI 3.14
double pole(int &r) { return PI * (r * r); }
int pole(int x, int &y) { return x * y; }
int main() {
  int a, b, h;
  std::cout << "Podaj bok podstawy/promien: ";
  std::cin >> a;
  std::cout << "Podaj drugi bok podstawy: ";
  std::cin >> b;
  std::cout << "Podaj wysokosc figury: ";
  std::cin >> h;
  std::cout << "Objetosc prostokata wynosi: " << pole(a, b) * h << std::endl;
  std::cout << "Objetosc walca wynosi: " << pole(a) * h << std::endl;
  std::cout << std::endl;
  return 0;
}
