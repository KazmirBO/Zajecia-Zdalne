#include <iostream>
#include <iterator>
#include <vector>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::vector<int> v = {2, 4, 6, 8, 10};
  std::ostream_iterator<int> out_it (std::cout,";");
  std::copy(v.begin(), v.end(), out_it);
  nl;
  return 0;
}
