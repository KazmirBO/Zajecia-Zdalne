#include <iostream>
using namespace std;
int fib(int a){
  if(a==1 || a==2) return 1;
  else return fib(a-1)+fib(a-2);
}
int main(){
  int a;
  cout<<"Podaj element: ";
  cin>>a;
  cout<<"Wynik: "<<fib(a)<<endl;
  cout<<endl;
  return 0;
}
