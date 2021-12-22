// Zestaw nr 10
#include <algorithm>
#include <iostream>
#include <iterator>
#include <list>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::cout << "Wprowadz kilka imion, CTRL+Z / CTRL+D = koniec: " << '\n';
  std::istream_iterator<int> start(std::cin);
  std::istream_iterator<int> end;
  std::list<int> lista(start, end);
  int n = lista.size();
  std::cout << "Ilosc liczb w Liscie wynosi: " << n << std::endl;
  for (auto e : lista)
    std::cout << e << " ";
  nl;
  return 0;
}
