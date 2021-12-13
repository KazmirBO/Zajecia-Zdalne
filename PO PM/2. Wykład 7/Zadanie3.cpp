#include<iostream>
#include<fstream>
int main(int argc, char const *argv[]) {
  std::ofstream("./plik.txt")<<"Ala ma kota";
  std::string tmp;
  getline(std::ifstream("./plik.txt"), tmp);
  std::cout<<tmp<<std::endl;
  return 0;
}
