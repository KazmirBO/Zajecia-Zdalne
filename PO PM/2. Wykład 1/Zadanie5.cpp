#include <iostream>
#include <algorithm>
#include <ctime>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  srand(time(NULL)); // Dla zadania 4ne
  int tab[7];
  for(int i=0;i<7;i++){
    tab[i]=(rand()%100+1);
  }
  for(auto e:tab) std::cout<<e<<" ";
  nl;
  std::cout<<"Min: "<<std::min_element(tab,tab+6); nl;
  std::cout<<"Max: "<<std::max_element(tab,tab+6); nl;
  return 0;
}
