#include <iostream>
class Prostokat {
public:
  int a, b;
  friend void pobierz(Prostokat &x);
};
void pobierz(Prostokat &x) {
  std::cout << "Podaj bok a: ";
  std::cin >> x.a;
  std::cout << "Podaj bok b: ";
  std::cin >> x.b;
}
int main(int argc, char const *argv[]) {
  Prostokat x;
  pobierz(x);
  std::cout << "Pole Prostokata wynosi: " << x.a * x.b << std::endl;
  std::cout << std::endl;
  return 0;
}
