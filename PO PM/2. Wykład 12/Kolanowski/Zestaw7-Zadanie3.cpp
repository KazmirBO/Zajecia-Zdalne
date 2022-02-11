// Sebastian Kolanowski Zestaw 7 Zadanie 3
#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
#include <vector>
int rn(int z1, int z2) { return rand() % z2 + z1; }
void Print(std::vector<int> v) {
  for (auto e : v)
    std::cout << e << "\t";
  std::cout << std::endl;
}
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  std::vector<int> v1, v2, vw;
  int i = 0;
  for (int i = 0; i < 7; i++)
    v1.push_back(rn(1, 10));
  for (int i = 0; i < 7; i++)
    v2.push_back(rn(1, 10));
  std::cout << "v1: ";
  Print(v1);
  std::cout << "v2: ";
  Print(v2);
  vw.resize(v1.size());
  std::transform(v1.begin(), v1.end(), vw.begin(), [&v1, &v2, &i](int x) {
    if (x % 3 == 0) {
      i++;
      return v1[i - 1] + v2[i - 1];
    } else {
      i++;
      return 333;
    }
  });
  std::cout << "vw: ";
  Print(vw);
  return 0;
}
