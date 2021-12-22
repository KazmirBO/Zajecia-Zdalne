#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
#define nl std::cout << '\n'
int main(int argc, char const *argv[]) {
  std::cout << "Wprowadz kilka liczb calkowitych, "
            << "CTRL+Z / CTRL+D = koniec: " << '\n';
  std::istream_iterator<int> start(std::cin);
  std::istream_iterator<int> end;
  std::vector<int> liczby(start, end);
  std::ostream_iterator<int> out(std::cout, " ");
  nl;
  int n = std::count_if(liczby.begin(), liczby.end(), [](int x) {
    if (x % 2 == 0 && x < 10)
      return 1;
    else
      return 0;
  });
  std::cout << "Liczb spelniajacych warunek jest: " << n;
  nl;
  return 0;
}
