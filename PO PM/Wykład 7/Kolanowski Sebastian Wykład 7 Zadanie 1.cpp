#include <cstring>
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  char imie[] = "Jan";
  char dimie[] = "Adam";
  char nazwisko[] = "Kowalski";
  char imienazw[50];
  strcpy(imienazw, imie);
  std::cout << imienazw << std::endl;
  strcpy(imienazw, dimie);
  std::cout << imienazw << std::endl;
  nl;
  return 0;
}
