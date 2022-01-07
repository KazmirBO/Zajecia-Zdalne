#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  int tab[10][10] = {0};
  int n, m;
  std::vector<int> v;
  std::cout << "Podaj pary sąsiadów: " << std::endl;
  std::cout << "\tPodaj n: ";
  std::cin >> n;
  std::cout << "\tPodaj m: ";
  std::cin >> m;
  while (m >= 0 && n >= 0) {
    tab[n][m]++;
    tab[m][n]++;
    std::cout << "Podaj pary sąsiadów: " << std::endl;
    std::cout << "\tPodaj n: ";
    std::cin >> n;
    std::cout << "\tPodaj m: ";
    std::cin >> m;
  }
  nl;
  for (int i = 1; i <= 6; i++) {
    for (int j = 1; j <= 6; j++) {
      std::cout << tab[i][j] << ", ";
    }
    nl;
  }
  nl;
  return 0;
}
