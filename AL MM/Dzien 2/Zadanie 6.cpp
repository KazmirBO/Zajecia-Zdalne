#include <iostream>
using namespace std;
int f(int x, int y){
  return x==y ? x : x>y ? 2*f(x-y,y) : x<y ? 2*(x,y-x);
/*  if(x==y){
    return x;
  } else if(x>y){
    return 2*f(x-y,y);
  } else if(x<y){
    return 2*f(x,y-x);
  }*/
  return 0;
}
int main(){
  int x,y;
  cout<<"Podaj x i y: "<<endl;
  cin>>x>>y;
  cout<<"Wynik: "<<f(x,y);
  cout<<endl;
  return 0;
}
