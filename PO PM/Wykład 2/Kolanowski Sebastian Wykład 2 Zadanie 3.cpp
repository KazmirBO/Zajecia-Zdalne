/*
Autor   : Kolanowski Sebastian
Projekt : Zadanie 1 Wykład 2
*/
#include <iostream>
template <class T> T wypisz(T x) { return x; }
int main() {
  int a;
  double b;
  std::string c;
  std::cout << "Podaj liczbe calkowita: ";
  std::cin >> a;
  std::cout << "Wpisales: " << wypisz(a) << std::endl;
  std::cout << "Podaj liczbe rzeczywista: ";
  std::cin >> b;
  std::cout << "Wpisales: " << wypisz(b) << std::endl;
  std::cout << "Podaj wyraz: ";
  std::cin >> c;
  std::cout << "Wpisales: " << wypisz(c) << std::endl;
  std::cout << std::endl;
  return 0;
}
