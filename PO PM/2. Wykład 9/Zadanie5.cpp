#include <iostream>
#include <queue>
#define nl std::cout << std::endl
void drukuj(std::queue<std::string> qu) {
  std::cout << "Rozmiar: " << qu.size() << std::endl;
  std::cout << "Pierwszy: " << qu.front() << std::endl;
  std::cout << "Ostatni: " << qu.back() << std::endl;
  std::cout << "Wszystkie elementy: ";
  while (!qu.empty()) {
    std::cout << qu.front() << ", ";
    qu.pop();
  }
}
int main(int argc, char const *argv[]) {
  std::queue<std::string> qu;
  qu.push("Ala");
  qu.push("Ela");
  qu.push("Ola");
  drukuj(qu);
  nl;
  return 0;
}
