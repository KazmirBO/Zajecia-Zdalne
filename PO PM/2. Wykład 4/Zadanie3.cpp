#include <algorithm>
#include <ctime>
#include <iostream>
#include <iterator>
#include <list>
#define nl std::cout << std::endl
bool drukuj(int liczba) {
  if (liczba > 50)
    return true;
  else
    return false;
}
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  std::list<std::string> list = {"pewnego", "szarego", "wietrznego", "dnia"};
  std::ostream_iterator<std::string> out(std::cout, " ");
  list.erase(find(list.begin(), list.end(), "wietrznego"));
  std::copy(list.begin(), list.end(), out);
  nl;
  return 0;
}
