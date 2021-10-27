#include <iostream>
#include <list>
#include <algorithm>
#define nl std::cout<<std::endl
void print(std::list<int>list){
  for(auto e:list) std::cout<<e<<" ";
}
int main(int argc, char const *argv[]) {
  std::list<int> liczby;
  for(int i=0;i<10;i++) {
    liczby.push_back(i);
  }
  print(liczby);
  nl;
  auto v=liczby.end();
  std::advance(v,8);
  liczby.erase(v,liczby.end());
  // for(int i=0;i<3;i++) liczby.pop_back();
  print(liczby);
  nl;
  return 0;
}
