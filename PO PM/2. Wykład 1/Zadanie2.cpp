#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::vector<int> v;
  for (int i = 1; i <= 5; i++) {
    v.push_back(i * 3);
  }
  for (auto e : v)
    std::cout << e << " ";
  nl;
  std::cout << "Pierwsza: " << v.front() << std::endl;
  std::cout << "Ostatnia: " << v.back() << std::endl;
  for (int i = 0; i < v.size(); i++) {
    std::cout << v.at(i) << " ";
  }
  nl;
  return 0;
}
