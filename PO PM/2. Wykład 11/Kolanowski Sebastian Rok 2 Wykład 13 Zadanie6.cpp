#include <cmath>
#include <functional>
#include <iostream>
int main(int argc, char const *argv[]) {
  int a = (std::cin >> (std::cout << "Podaj a: ", a), a);
  int b = (std::cin >> (std::cout << "Podaj b: ", b), b);
  std::function<float()> f_odleglosc = [&a, &b]() {
    return sqrt(pow(a, 2) + pow(b, 2));
  };
  std::cout << "Odleglosc wynosi: " << f_odleglosc() << std::endl;
  return 0;
}
