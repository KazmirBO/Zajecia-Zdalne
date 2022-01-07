#include <iostream>
float f(int x) {
  return 3 * (x * x * x) - (x * x) + 2 * x - 4; // Miejsce zerowe wynosi 1
}
float zerowe(int a, int b, int przecinek) {
  float srodek = (a + b) / 2;
  while (b - a > przecinek) {
    if (f(a) * f(b) >= 0) {
      std::cout << "Funkcja nie ma miejsc zerowych." << std::endl;
      std::cout << std::endl;
      exit(1);
    }
    if (f(srodek) == 0) {
      std::cout << "Miejscem zerowym funkcji jest: " << srodek << "."
                << std::endl;
      std::cout << std::endl;
      exit(1);
    } else if (f(a) == 0) {
      std::cout << "Miejscem zerowym funkcji jest: " << a << "." << std::endl;
      std::cout << std::endl;
      exit(1);
    } else if (f(b) == 0) {
      std::cout << "Miejscem zerowym funkcji jest: " << b << "." << std::endl;
      std::cout << std::endl;
      exit(1);
    }
    if (f(a) * f(srodek) < 0)
      return zerowe(a, srodek, przecinek);
    else
      return zerowe(srodek, b, przecinek);
  }
  std::cout << "Funkcja nie ma miejsc zerowych." << std::endl;
  std::cout << std::endl;
  exit(1);
}
int main() {
  float a, b, przecinek = 0.001;
  std::cout << "Podaj a: ";
  std::cin >> a;
  std::cout << "Podaj b: ";
  std::cin >> b;
  std::cout << "Wynik: " << std::endl << zerowe(a, b, przecinek);
  std::cout << std::endl;
  return 0;
}
