#include <algorithm>
#include <deque>
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::deque<float> liczby;
  float tmp;
  while (std::cin >> tmp) {
    if (tmp == -1) {
      break;
    }
    liczby.push_back(tmp);
  }
  sort(liczby.begin(), liczby.end());
  int size = liczby.size();
  for (int i = 0; i < size; i++)
    std::cout << liczby[i] << " ";
  nl;
  for (auto it = liczby.begin(); it != liczby.end(); ++it) {
    std::cout << *it << ' ';
  }
  nl;
  for (auto e : liczby)
    std::cout << e << " ";
  nl;
  return 0;
}
