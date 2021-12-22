#include <algorithm>
#include <ctime>
#include <iostream>
#include <iterator>
#include <vector>
#define nl std::cout << std::endl
int losowa() { return rand() % 100; }
int mnozenie(int x) { return x * 10; }
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  std::vector<int> v;
  std::generate_n(std::back_inserter(v), 10, losowa);
  std::ostream_iterator<int> out_it(std::cout, " ");
  std::copy(v.begin(), v.end(), out_it);
  nl;
  std::transform(v.begin(), v.end(), v.begin(), mnozenie);
  std::copy(v.begin(), v.end(), out_it);
  nl;
  return 0;
}
