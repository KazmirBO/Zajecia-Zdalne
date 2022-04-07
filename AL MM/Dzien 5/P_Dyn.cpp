#include <iostream>
const short WT = 15;
int *tab1;
int wybor;
int main() {
  while (true) {
    int x, n, p, r;
    std::string nominal;
    wybor = (std::cin >> (std::cout
                              << "Wybierz nominal: " << std::endl
                              << "1. PLN (przeliczony w groszach)" << std::endl
                              << "2. USD (przeliczony w centach)" << std::endl
                              << "Wybor: ",
                          wybor),
             wybor);
    if (wybor == 1 || wybor == 2) {
      switch (wybor) {
      case 1:
        tab1 = new int[WT]{50000, 20000, 10000, 5000, 2000, 1000, 500, 200,
                           100,   50,    20,    10,   5,    2,    1};
        nominal = "groszach";
        break;
      case 2:
        tab1 = new int[WT]{100000, 20000, 10000, 5000, 2000, 1000, 500,
                           200,    100,   50,    25,   10,   5,    1};
        nominal = "centach";
        break;
      }
    } else {
      std::cout << "Wybrales zla liczbe" << std::endl;
      exit(1);
    }
    r = (std::cin >>
             (std::cout << "Podaj reszte do wyplacenia (w " << nominal << "): ",
              r),
         r);
    std::cout << std::endl;
    while (r > 0) {
      n = 0;
      for (int i = 0; i <= 15; ++i) {
        if ((tab1[i] <= r) && (tab1[i] > n)) {
          p = r / tab1[i];
          n = tab1[i];
          std::cout << tab1[i] << " wydany " << p << " raz/y," << std::endl;
          while (tab1[i] <= r)
            r -= n;
        }
      }
      ++x;
    }
    std::cout << std::endl;
    delete[] tab1;
  }
  return 0;
}
