#include <algorithm>
#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::vector<std::string> v1 = {"Hela", "Lola", "Ziuta", "Ada", "Buba"};
  auto begin = v1.begin();
  auto end = v1.end();
  std::is_heap(begin, end);
  std::cout << "Nie ma sterty." << std::endl;
  std::cout << "Elementy w wektorze: " << std::endl;
  for (auto e : v1)
    std::cout << e << ", ";
  nl;
  std::cout << "Elementy stogowe: ";
  return 0;
}
