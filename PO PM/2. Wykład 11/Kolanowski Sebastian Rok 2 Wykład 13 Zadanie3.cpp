#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  double suma = 0;
  std::vector<double> v1 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
  std::for_each(v1.begin(), v1.end(), [&suma](int x) { return suma += x; });
  std::cout << "Suma elementow wynosi: " << suma << std::endl;
  std::cout << "Srednia elementow wynosi: " << suma / v1.size() << std::endl;
  return 0;
}
