#include <cmath>
#include <iostream>
int main(int argc, char const *argv[]) {
  float x = (std::cin >> (std::cout << "Podaj argument x: ", x), x);
  auto fun1 = [](float x) { return x += 100; };
  auto fun2 = [](float x) { return x *= 100; };
  auto fun3 = [](float x) { return x /= 100; };
  auto fun4 = [](float x) { return x = pow(x, 2); };
  std::cout << "Wynik funkcji dodawania wynosi: " << fun1(x) << std::endl;
  std::cout << "Wynik funkcji odejmowania wynosi: " << fun2(x) << std::endl;
  std::cout << "Wynik funkcji mnozenia wynosi: " << fun3(x) << std::endl;
  std::cout << "Wynik funkcji dzielenia wynosi: " << fun4(x) << std::endl;
  return 0;
}
