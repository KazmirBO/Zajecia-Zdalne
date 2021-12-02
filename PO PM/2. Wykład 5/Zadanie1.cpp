#include <iostream>
#include <vector>
#include <iterator>
#define nl std::cout<<'\n'
int main(int argc, char const *argv[]) {
  std::cout << "Wprowadz kilka imion, CTRL+Z / CTRL+D = koniec: " << '\n';
  std::istream_iterator<std::string> start(std::cin);
  std::istream_iterator<std::string> end;
  std::vector<std::string> imiona(start,end);
  nl;
  std::copy(imiona.begin(), imiona.end(),
    std::ostream_iterator<std::string> (std::cout, "\n"));
  return 0;
}
