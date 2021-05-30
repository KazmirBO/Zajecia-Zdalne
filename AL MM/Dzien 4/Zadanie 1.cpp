#include <iostream>
#include <ctime>
#include <cmath>
#include "../funkcje.h"
int main() {
  srand(time(NULL));
  int n=10, tab[n];
  Los(tab,n,0,20);
  Wypisz(tab,n);
  std::cout<<std::endl;
  Babelkowe(tab,n);
  Wypisz(tab,n);
  std::cout<<std::endl;
  Insertion(tab,n);
  Wypisz(tab,n);
  std::cout<<std::endl;
  return 0;
}
