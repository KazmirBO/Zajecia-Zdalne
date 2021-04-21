#include <iostream>
using namespace std;
int NWD(int a, int b){
  if(a!=b){
    return NWD(a>b?a-b:a,b>a?b-a:b);
  }
  return 0;
}
int main(){
  int a,b;
  cout<<"Podaj a i b: ";
  cin>>a>>b;
  cout<<"Wynik: "<<NWD(a,b)<<endl;
  cout<<endl;
  return 0;
}
