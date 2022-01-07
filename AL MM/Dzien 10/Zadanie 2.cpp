#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  int r, n, a, b;
  std::cout << "Podaj ilosc wierzcholkow: ";
  std::cin >> n;
  std::vector<int> t[n + 1];
  int tab[n + 1][n + 1] = {0};
  for (int i = 0; i <= n; i++)
    for (int j = 0; j <= n; j++)
      tab[i][j] = 0;
  std::cout << "Podaj pary sąsiadów: " << std::endl;
  std::cout << "\tPodaj a: ";
  std::cin >> a;
  std::cout << "\tPodaj b: ";
  std::cin >> b;
  do {
    t[a].push_back(b);
    tab[a][b]++;
    if (a != b) {
      t[b].push_back(a);
      tab[b][a]++;
    }
    std::cout << "Podaj pary sąsiadów: " << std::endl;
    std::cout << "\tPodaj a: ";
    std::cin >> a;
    std::cout << "\tPodaj b: ";
    std::cin >> b;
  } while (a >= 0 && b >= 0);
  nl;
  std::cout << "   ";
  for (int i = 1; i <= n; i++)
    std::cout << i << "  ";
  nl;
  for (int i = 1; i <= n; i++) {
    std::cout << i << "  ";
    for (int j = 1; j <= n; j++) {
      std::cout << tab[i][j] << ", ";
    }
    nl;
  }
  nl;
  for (int i = 1; i <= n; i++) {
    std::cout << i << " = ";
    r = t[i].size();
    for (int j = 0; j < r; j++) {
      std::cout << t[i][j] << ", ";
    }
    nl;
  }
  nl;
  return 0;
}
