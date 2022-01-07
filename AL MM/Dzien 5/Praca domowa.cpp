#include <ctime>
#include <iostream>
#include <unistd.h>
#include <vector>
void Wydaj(int Wartosc) {
  std::vector<int> Monety = {1, 3, 4};
  std::vector<int> Mozliwosc;
  int Pom1 = Monety.size() - 1;
  while (Wartosc > 0) {
    if (Wartosc - Monety[Pom1] >= 0) {
      Wartosc -= Monety[Pom1];
      Mozliwosc.push_back(Monety[Pom1]);
    } else {
      if (Wartosc - Monety[Pom1] < Monety[Pom1 - 1])
        Pom1 -= 2;
      else
        Pom1--;
    }
  }
  for (auto e : Mozliwosc)
    std::cout << e << " ";
  std::cout << std::endl;
}
int main(int argc, char const *argv[]) {
  int Wartosc = 6;
  Wydaj(Wartosc);
  std::cout << std::endl;
  return 0;
}
