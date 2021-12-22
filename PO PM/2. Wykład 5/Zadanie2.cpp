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
  nl;
  while (start != end) {
    std::cout << "element = " << *start << '\n';
    std::cout << "element = " << *start << '\n';
    ++start;
  }
  return 0;
}
