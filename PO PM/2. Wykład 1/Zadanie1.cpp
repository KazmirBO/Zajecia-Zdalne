#include <iostream>
#include <algorithm>
#include <vector>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::vector<int> v;
  int n, x;
  std::cout<<"Podaj ilosc liczb: ";
  std::cin>>n;
  for(int i=0;i<n;i++){
    std::cout<<"Podaj "<<i+1<<" liczbe: ";
    std::cin>>x;
    v.push_back(x);
  }
  nl;
  std::cout<<"Podano "<<v.size()<<" liczb."<<std::endl;
  std::cout<<"Przed sortowaniem: "<<std::endl;
  for(auto e:v) std::cout<<e<<" ";
  int tmp;
  // std::sort(v.begin(), v.end());
  for(int i=0;i<v.size();i++){
    for(int j=0;j<i;j++){
      if(v[i]<v[j]){
        tmp=v[i];
        v[i]=v[j];
        v[j]=tmp;
      }
    }
  }
  nl;
  std::cout<<"Po sortowaniu: "<<std::endl;
  for(auto e:v) std::cout<<e<<" ";
  nl;
  return 0;
}
