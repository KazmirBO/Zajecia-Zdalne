#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  double trzy = 0, piec = 0;
  std::vector<double> v1 = {3, 6, 7, 9, 15, 10, 12, 11, 18, 17, 25, 30};
  std::for_each(v1.begin(), v1.end(), [&trzy, &piec](int x) {
    if (x % 3 == 0)
      trzy++;
    if (x % 5 == 0)
      piec++;
  });
  std::cout << "Podzielnych przez 3 jest: " << trzy << std::endl;
  std::cout << "Podzielnych przez 5 jest: " << piec << std::endl;
  return 0;
}
