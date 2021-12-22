#include<iostream>
#include<algorithm>
#include<vector>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::vector<std::string> v1 = {
    "Hela","Lola","Ziuta","Ada","Buba"
  };
  auto begin = v1.begin();
  auto end = v1.end();
  for(auto e:v1) std::cout<<e<<", ";
  nl;
  std::make_heap(begin, end);
  std::sort_heap(begin, end);
  for(auto e:v1) std::cout<<e<<", ";
  nl;
  return 0;
}
