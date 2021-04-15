#include <iostream>
long long fib(int n){
  if(n<=1) return 1;
  long long ostatnia=1;
  long long przedostatnia=1;
  long long wynik=1;
  for(int i=2;i<=n;++i){
    wynik=ostatnia+przedostatnia;
    przedostatnia=ostatnia;
    ostatnia=wynik;
  }
  return wynik;
}
int main(int argc, char const *argv[]) {
  int n=30;
  std::cout<<fib(n)<<std::endl;
  std::cout<<std::endl;
  return 0;
}
