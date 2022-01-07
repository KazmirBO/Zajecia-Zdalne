#include <algorithm>
#include <iostream>
#include <random>
#include <vector>
int szukanie_bin(std::vector<int> tab, int start, int stop, int szukana) {
  if (start <= stop) {
    int srodek = (start + stop) / 2;
    if (tab[srodek] == szukana)
      return srodek;
    else if (tab[srodek] > szukana)
      return szukanie_bin(tab, start, srodek - 1, szukana);
    else if (tab[srodek] < szukana)
      return szukanie_bin(tab, srodek + 1, stop, szukana);
    else
      return 0;
  }
  return 0;
}
int main() {
  std::random_device(rnd);
  std::mt19937 gen(rnd());
  std::uniform_int_distribution<> dist(1, 100);
  std::vector<int> dane;
  int n = 50;
  int szukana;
  std::cout << "Czego szukasz: ";
  std::cin >> szukana;
  for (int i = 0; i < n; i++)
    dane.push_back(dist(gen));
  for (auto e : dane)
    std::cout << e << " ";
  std::cout << std::endl;
  sort(dane.begin(), dane.end());
  // sort(dane.begin(), dane.begin()+dane.size()/2, std::greater<int>());
  for (auto e : dane)
    std::cout << e << " ";
  std::cout << std::endl;
  std::cout << szukanie_bin(dane, 0, n - 1, szukana) << std::endl;
  std::cout << std::endl;
  return 0;
}
