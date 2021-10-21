#include <iostream>
#include <chrono>
#include <cmath>
void f() {
  double a=3.14;
  for(int i=0;i<10000;i++) a=pow(a,a);
}
void g(){
  double a=3.14;
  for(int i=0;i<10000;i++) a=sin(a);
}
int main(int argc, char const *argv[]) {
  auto t1=std::chrono::high_resolution_clock::now();
  for(int i=0;i<10000;i++) f();
  auto t2=std::chrono::high_resolution_clock::now();
  for(int i=0;i<10000;i++) g();
  std::cout<<"Funkcja obliczona: "
    <<std::chrono::duration_cast<std::chrono::milliseconds>(t2-t1).count();
  std::cout<<std::endl;
  return 0;
}
