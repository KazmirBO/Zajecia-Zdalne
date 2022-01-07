#include <iostream>
#include <vector>
int wydaj(long double reszta) {
  std::vector<double> nominal;
  int ilemonet = 0;
  nominal = {0.01, 0.02, 0.05, 0.1, 0.2, 0.5, 1,  2,
             5,    10,   20,   50,  100, 200, 500};
  while (reszta >= 0) {
    if (nominal.back() <= reszta) {
      std::cout << reszta << "-" << nominal.back() << std::endl;
      reszta -= nominal.back();
      ilemonet++;
      std::cout << reszta << " " << nominal.size() << " " << std::endl;
    } else
      nominal.pop_back();
  }
  return ilemonet;
}
int main() {
  long double reszta = 999.99;
  std::cout << wydaj(reszta);
  std::cout << std::endl;
  return 0;
}
