// Sebastian Kolanowski Zestaw 7 Zadanie 2
#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
struct Walec {
  int r, h;
};
void Print(struct Walec v) { std::cout << v.r << ", " << v.h << std::endl; }
bool pole(struct Walec v1, struct Walec v2) {
  return ((2 * M_PI * v1.r * v1.h) < (2 * M_PI * v2.r * v2.h));
}
int main(int argc, char const *argv[]) {
  std::vector<Walec> v{{1, 5}, {5, 5}, {2, 10}};
  std::sort(v.begin(), v.end(), pole);
  for (auto e : v)
    Print(e);
  std::cout << "Najwieksze pole powierzchni bocznej wynosi: "
            << 2 * M_PI * v[2].r * v[2].h << std::endl;
  return 0;
}
