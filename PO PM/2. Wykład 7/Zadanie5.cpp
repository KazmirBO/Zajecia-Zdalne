#include <fstream>
#include <iostream>
int main(int argc, char const *argv[]) {
  std::string tmp;
  std::ofstream plik("./plik.txt");
  plik << "Twoje haslo to:\nloli1313";
  plik.close();
  std::ifstream plik2("./plik.txt");
  while (!plik2.eof()) {
    getline(plik2, tmp);
    std::cout << tmp << std::endl;
  }
  return 0;
}
