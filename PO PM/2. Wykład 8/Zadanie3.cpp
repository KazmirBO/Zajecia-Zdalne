#include <algorithm>
#include <array>
#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::string imie;
  int count;
  std::vector<std::string> v1 = {"Buba", "Ziuta",    "Hela", "Ewa",
                                 "Ala",  "Eleonora", "Lola"};
  auto begin = v1.begin();
  auto end = v1.end();
  while (count < 3) {
    std::cin >> imie;
    if (std::binary_search(begin, end, imie)) {
      std::cout << "Wystepuje." << std::endl;
    } else {
      std::cout << "Nie Wystepuje." << std::endl;
    }
    count++;
  }
  nl;
  return 0;
}
