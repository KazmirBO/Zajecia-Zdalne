#include <algorithm>
#include <cmath>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<int> v({1, 2, 3, 4});
  int suma = 0;
  std::for_each(v.begin(), v.end(), [&suma](int i) { return suma += i * i; });
  std::cout << suma << std::endl;
  return 0;
}
