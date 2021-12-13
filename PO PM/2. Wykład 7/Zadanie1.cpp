#include<iostream>
#include<algorithm>
#include<vector>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::vector<std::string> miasta;
  miasta.push_back("Chelm");
  miasta.push_back("Lublin");
  miasta.push_back("Warszawa");
  miasta.push_back("Lodz");
  miasta.push_back("Poznan");
  for(auto i=miasta.begin(); i!=miasta.end();i++){
    std::cout<<*i<<" ";
  }
  std::sort(miasta.begin(), miasta.end());
  nl;
  for(auto e:miasta){
    std::cout<<e<<" ";
  }
  nl;
  return 0;
}
