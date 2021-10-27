#include <iostream>
#include <list>
#include <algorithm>
#define nl std::cout<<std::endl
void print(std::list<int>list){
  for(auto e:list) std::cout<<e<<" ";
}
int main(int argc, char const *argv[]) {
  std::list<int> liczby1={0,1,2,3,4};
  std::list<int> liczby2={2,3,4,5,6,7};
  std::list<int> liczby3;
  print(liczby1);
  nl;
  print(liczby2);
  nl;
  return 0;
}
