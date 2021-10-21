#include <iostream>
#include <vector>
#include <ctime>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  srand(time(NULL)); // Dla zadania 4
  std::vector<int> v;
  for(int i=0;i<10;i++){
    v.push_back(rand()%100+1);
  }
  for(auto e:v) std::cout<<e<<" ";
  nl;
  return 0;
}
