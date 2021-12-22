#include <algorithm>
#include <iostream>
#include <list>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::list<int> list = {1, 2, 3, 4, 5, 6, 7};
  std::list<int>::iterator it;
  std::list<int>::reverse_iterator rit;
  std::for_each(list.begin(), list.end(),
                [](int liczba) { std::cout << liczba << " "; });
  nl;
  for (rit = list.rbegin(); rit != list.rend(); ++rit)
    std::cout << *rit << " ";
  nl;
  std::for_each(list.rbegin(), list.rend(),
                [](int liczba) { std::cout << liczba << " "; });
  nl;
  return 0;
}
