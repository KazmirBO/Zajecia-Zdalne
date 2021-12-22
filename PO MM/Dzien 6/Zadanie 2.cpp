#include <iostream>
class Bazowa {
public:
  void Wiadomosc() { std::cout << "Wiadomosc z klasy bazowej." << std::endl; }
};
class Potomna : public Bazowa {
public:
  void Wiadomosc() { std::cout << "Wiadomosc z klasy potomnej." << std::endl; }
};
int main(int argc, char const *argv[]) {
  Bazowa b;
  Potomna p;
  b.Wiadomosc();
  std::cout << std::endl;
  p.Wiadomosc();
  std::cout << std::endl;
  return 0;
}
