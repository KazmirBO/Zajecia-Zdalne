#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::vector<int> v;
  std::vector<int>::iterator it;
  for (int i = -3; i <= 8; i++)
    v.push_back(i);
  int size = v.size();
  std::cout << "Ilosc elementow: " << size << std::endl;
  std::cout << "Iterator: " << std::endl;
  for (it = v.begin(); it != v.end(); ++it)
    std::cout << *it << " ";
  nl;
  std::cout << "Operator indexu:" << std::endl;
  for (int i = 0; i < size; i++)
    std::cout << v[i] << " ";
  nl;
  std::cout << "Iterator co 2: " << std::endl;
  for (it = v.begin(); it != v.end(); it += 2)
    std::cout << *it << " ";
  nl;
  return 0;
}
