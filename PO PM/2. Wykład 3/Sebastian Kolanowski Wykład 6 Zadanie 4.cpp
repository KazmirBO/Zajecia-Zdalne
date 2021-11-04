#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  int tab[] = {1, 2, 3, 4, 5};
  std::vector<int> v1 (5);
  std::vector<int>::reverse_iterator rit;
  std::ostream_iterator<int> out_it (std::cout," ");
  std::copy(std::begin(tab), std::end(tab), v1.begin());
  std::copy(v1.begin(), v1.end(), out_it);
  nl;
  std::for_each(v1.rbegin(), v1.rend(), [](int liczba){std::cout<<liczba<<" ";});
  nl;
  for(rit=v1.rbegin();rit!=v1.rend();++rit) std::cout<<*rit<<" ";
  nl;
  return 0;
}
