// Sebastian Kolanowski Zestaw 7 Zadanie 1
#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<int> v1{8, 1, 1, 6, 3, 4, 1, 1, 7, 6};
  std::vector<int> v2;
  std::for_each(v1.begin(), v1.end(), [&v2](int x) {
    if (x % 2 == 0)
      v2.push_back(x);
  });
  std::cout << "V1: " << std::endl;
  for (auto e : v1)
    std::cout << e << " ";
  std::cout << std::endl << "V2: " << std::endl;
  for (auto e : v2)
    std::cout << e << " ";
  std::cout << std::endl << "Liczb parzystych jest: " << v2.size() << std::endl;
  return 0;
}
