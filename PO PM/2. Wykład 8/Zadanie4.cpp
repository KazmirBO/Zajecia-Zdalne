#include <algorithm>
#include <array>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::vector<int> v1 = {0, 1, 2, 3, 4};
  std::vector<int> v2 = {5, 4, 3, 2, 1};
  int a = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0);
  std::cout << a << std::endl;
  int b = std::inner_product(v1.begin(), v1.end(), v2.begin(), 0, std::plus<>(),
                             std::equal_to<>());
  std::cout << b << std::endl;
  return 0;
}
