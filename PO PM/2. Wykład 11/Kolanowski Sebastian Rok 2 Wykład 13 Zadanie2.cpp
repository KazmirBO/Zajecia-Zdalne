#include <cmath>
#include <iostream>
int main(int argc, char const *argv[]) {
  double a = 0, b = 0;
  do {
    a = (std::cin >> (std::cout << "Podaj a rozne od 0: ", a), a);
  } while (a == 0);
  do {
    b = (std::cin >> (std::cout << "Podaj b rozne od 0: ", b), b);
  } while (b == 0);
  auto fun1 = [&a, &b]() { return a + b; };
  auto fun2 = [&a, &b]() { return a - b; };
  auto fun3 = [&a, &b]() { return a * b; };
  auto fun4 = [&a, &b]() { return a / b; };
  std::cout << "Wynik funkcji dodawania wynosi: " << fun1() << std::endl;
  std::cout << "Wynik funkcji odejmowania wynosi: " << fun2() << std::endl;
  std::cout << "Wynik funkcji mnozenia wynosi: " << fun3() << std::endl;
  std::cout << "Wynik funkcji dzielenia wynosi: " << fun4() << std::endl;
  return 0;
}
