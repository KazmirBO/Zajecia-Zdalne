#include <algorithm>
#include <iostream>
#include <vector>
#define nl std::cout << std::endl
class Transport {
private:
  int skl_a = 2;
  int skl_b = 1;
  int skl_c = 0;

public:
  void f_skladowa();
  static void f_skl_statyczna();
};
void Transport::f_skladowa() {
  std::vector<int> wek{1, 2, 7, 4, 5, -1, 0};
  auto p = wek.begin();
  auto k = wek.end();
  int rezultat;
  std::cout << "Wartosc skl_a = " << skl_a << std::endl;
  rezultat = count_if(p, k, [this](int j) {
    skl_c++;
    return (j < (skl_a + this->skl_b));
  });
  std::cout << "Cialo lambdy wykorzystalo skladniki na 2 sposoby. "
            << std::endl;
  std::cout << "Rezultat liczenia = " << rezultat << std::endl;
  std::cout << "Dostep przez referencje skl_c = " << skl_c << std::endl;
  std::cout << "Z wykorzystaniem [=] " << std::endl;
  rezultat =
      count_if(p, k, [=](int j) { return (j < (2 * skl_a + this->skl_b)); });
  std::cout << "Drugie Liczenie liczb mniejszych niz " << 2 * skl_a + skl_b
            << " = " << rezultat << std::endl;
}
void Transport::f_skl_statyczna() {
  // auto lambda2=[this](int j){return true; j<(2*skl_a+this->skl_b);};
  // auto lambda3=[=](int j){return true; j<(2*skl_a+this->skl_b);};
  // std::cout<<lambda2<<";"<<lambda3>>std::endl;
}
int main(int argc, char const *argv[]) {
  Transport d;
  d.f_skladowa();
  nl;
  return 0;
}
