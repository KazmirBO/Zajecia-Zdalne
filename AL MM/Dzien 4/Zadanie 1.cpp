#include "../funkcje.h"
#include <cmath>
#include <ctime>
#include <iostream>
int main() {
  srand(time(NULL));
  int n = 10, tab[n];
  Los(tab, n, 0, 20);
  Wypisz(tab, n);
  std::cout << std::endl;
  Babelkowe(tab, n);
  Wypisz(tab, n);
  std::cout << std::endl;
  Insertion(tab, n);
  Wypisz(tab, n);
  std::cout << std::endl;
  return 0;
}
