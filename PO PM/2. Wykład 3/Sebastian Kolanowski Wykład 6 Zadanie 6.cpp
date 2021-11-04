#include <iostream>
#include <iterator>
#include <algorithm>
#include <vector>
#define nl std::cout<<std::endl
int losowa(){
  return rand()%100;
}
int main(int argc, char const *argv[]) {
  std::vector<int> v;
  std::generate_n(std::back_inserter(v), 10, losowa);
  std::ostream_iterator<int> out_it (std::cout," ");
  std::copy(v.begin(), v.end(), out_it);
  nl;
  return 0;
}
