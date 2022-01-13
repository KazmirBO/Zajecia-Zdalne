#include <bitset>
#include <complex>
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::complex<double> cp(4.0, 3.0);
  std::cout << "Real:" << cp.real() << std::endl;
  std::cout << "Imag:" << cp.imag() << std::endl;
  std::cout << "Norm:" << std::norm(cp) << std::endl;
  std::cout << "Modu:" << std::abs(cp) << std::endl;
  nl;
  return 0;
}
