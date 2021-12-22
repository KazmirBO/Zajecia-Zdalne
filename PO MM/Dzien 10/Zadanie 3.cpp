#include <algorithm>
#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  auto wypisz = [](double s) {
    std::cout << "Lambda wypisz s = " << s << std::endl;
  };
  wypisz(8.6);
  wypisz(200.21);
  std::vector<int> v{4, 2, 13, 24};
  for_each(v.begin(), v.end(), wypisz);
  nl;
  return 0;
}
