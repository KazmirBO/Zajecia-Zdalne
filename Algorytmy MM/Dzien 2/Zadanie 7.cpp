#include <iostream>
using namespace std;
int pow(int n, int a, int wynik){
  return a==1?wynik:pow(n,a-1,wynik*n);
//  if(a==1) return wynik;
//  else return pow(n,a-1,wynik*n);
}
int main(){
  int a,n;
  cout<<"Podaj liczbe: ";
  cin>>n;
  cout<<"Podaj potege: ";
  cin>>a;
  cout<<"Potega wynosi: "<<pow(n,a,n)<<endl;
  cout<<endl;
  return 0;
}
