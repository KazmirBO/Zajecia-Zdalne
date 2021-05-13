#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::vector<int>v{4,2,13,15,24,7};
  auto pocz=v.begin();
  auto kon=v.end();
  int ile=count_if(pocz,kon,[](int liczba){return(liczba%2);});
  std::cout<<"Nieparzystych jest... "<<ile<<std::endl;
  nl;
  ile=count_if(pocz,kon,[](int liczba){return(liczba>9);});
  std::cout<<"Liczb wiekszych od 9 jest... "<<ile<<std::endl;
  nl;
  for(int k=3;k<6;k++){
    ile=count_if(pocz,kon,[k](int liczba){return(liczba>k);});
    std::cout<<"Liczb wiekszych od "<<k<<" jest... "<<ile<<std::endl;
  }
  nl;
  [](std::string napis){std::cout<<"To jest "<<napis<<std::endl;}("koniec");
  nl;
  return 0;
}
