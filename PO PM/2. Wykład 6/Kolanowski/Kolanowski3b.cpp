// Zestaw nr 10
#include <iostream>
#include <queue>
#include <string>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::string S = "abrakadabra";
  std::priority_queue<char> tekst;
  char znak;
  for (int i = 0; i < S.size(); i++) {
    znak = S[i];
    tekst.push(znak);
  }
  std::cout << tekst.size() << std::endl;
  while (!tekst.empty()) {
    std::cout << tekst.top() << " ";
    tekst.pop();
  }
  nl;
  return 0;
}
