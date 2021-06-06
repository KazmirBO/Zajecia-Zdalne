#include <iostream>
#include <fstream>
#include <vector>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::vector<std::string> v;
  std::fstream plik1, plik2, plik3;
  std::string tmp;
  plik1.open("Nazwiska1.txt", std::ios::in);
  plik2.open("Nazwiska2.txt", std::ios::in);
  plik3.open("Wynik.txt", std::ios::out);
  while(!plik1.eof()){
    getline(plik1,tmp);
    v.push_back(tmp);
  }
  while(!plik2.eof()){
    getline(plik2,tmp);
    v.push_back(tmp);
  }
  int r=v.size();
  for(int i=0;i<r;i++){
    for(int j=0;j<r-1;j++){
      if(v[j]>v[j+1]) std::swap(v[j],v[j+1]);
    }
  }
  for(auto e:v) plik3<<e<<std::endl;
  nl;
  return 0;
}
