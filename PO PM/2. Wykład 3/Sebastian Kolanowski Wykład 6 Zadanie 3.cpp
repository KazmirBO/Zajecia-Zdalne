#include <iostream>
#include <vector>
#include <algorithm>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  int tab[] = {1, 2, 3, 4, 5};
  std::vector<int> v1 (5);
  std::vector<int>::reverse_iterator it;
  std::copy(std::begin(tab), std::end(tab), v1.begin());
  for (it = v1.rbegin(); it!=v1.rend(); ++it) std::cout<<*it<<" ";
  nl;
  return 0;
}
