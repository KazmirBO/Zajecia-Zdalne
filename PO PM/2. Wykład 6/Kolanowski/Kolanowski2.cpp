// Zestaw nr 10
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::list<int> lista = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
  std::list<int>::iterator it;
  for (auto e : lista)
    std::cout << e << " ";
  nl;
  it = lista.begin();
  for (int i = 0; i < 5; i++)
    ++it;
  lista.erase(it);
  std::transform(lista.begin(), lista.end(), lista.begin(),
                 [](int x) { return x + 5; });
  for (auto e : lista)
    std::cout << e << " ";
  nl;
  return 0;
}
