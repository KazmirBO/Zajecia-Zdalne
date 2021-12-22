#include <algorithm>
#include <array>
#include <cmath>
#include <functional>
#include <iostream>
#include <numeric>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  int a = 3, b = 4, c = pow(a, 2) + pow(b, 2);
  std::cout << "c = " << sqrt(c) << std::endl;
  return 0;
}
