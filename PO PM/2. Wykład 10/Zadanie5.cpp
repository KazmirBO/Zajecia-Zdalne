#include <algorithm>
#include <cmath>
#include <iostream>
#include <ratio>
#include <vector>
int main(int argc, char const *argv[]) {
  typedef std::ratio<1, 2> x;
  typedef std::ratio<1, 4> y;
  typedef std::ratio<1, 8> z;
  std::cout << x::num << "/" << x::den << std::endl;
  std::cout << y::num << "/" << y::den << std::endl;
  std::cout << z::num << "/" << z::den << std::endl;
  typedef std::ratio_add<x, y> sum;
  typedef std::ratio_add<sum, z> suma;
  std::cout << suma::num << "/" << suma::den << std::endl;
  if (std::ratio_less<x, y>::value)
    std::cout << "x jest mniejszy" << std::endl;
  else
    std::cout << "x jest wiekszy" << std::endl;
  return 0;
}
