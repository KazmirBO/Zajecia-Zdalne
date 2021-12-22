#include <fstream>
#include <iostream>
int main(int argc, char const *argv[]) {
  std::string tmp;
  std::ifstream plik1("./plik.txt");
  while (!plik1.eof()) {
    getline(plik1, tmp);
    std::cout << tmp << std::endl;
  }
  plik1.close();
  std::ofstream plik2("./plik.txt", std::ios::app);
  plik2 << "Janek\nMaria\n";
  plik2.close();
  std::ifstream plik3("./plik.txt");
  while (!plik3.eof()) {
    getline(plik3, tmp);
    std::cout << tmp << std::endl;
  }
  plik3.close();
  return 0;
}
