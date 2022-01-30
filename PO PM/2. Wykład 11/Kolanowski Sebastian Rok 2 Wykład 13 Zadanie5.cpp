#include <ctime>
#include <iostream>
#include <random>
#include <vector>
int main(int argc, char const *argv[]) {
  std::vector<std::string> v1 = {"Hela", "Lola", "Buba", "Ziuta", "Paloma"};
  std::mt19937 los(time(NULL));
  int wylosowana = los() % v1.size();
  std::cout << "Wylosowano: " << wylosowana << "\nNagrode otrzymuje "
            << v1[wylosowana] << std::endl;
  return 0;
}
