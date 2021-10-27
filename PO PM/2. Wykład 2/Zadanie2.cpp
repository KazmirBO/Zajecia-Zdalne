#include <iostream>
#include <list>
#include <algorithm>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::list<int> liczby;
  int tmp;
  while(std::cin>>tmp) {
    if(tmp==-1){break;}
    liczby.push_back(tmp);
  }
  liczby.sort();
  for(auto e:liczby) std::cout<<e<<" ";
  nl;
  return 0;
}
