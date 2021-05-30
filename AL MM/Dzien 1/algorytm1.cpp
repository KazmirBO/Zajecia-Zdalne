#include <iostream>
#include <cmath>
using namespace std;
int main(){
  int n=0,w=0;
  cout<<"Podaj liczbe: ";
  cin>>n;
  n+=1;
  bool *S=new bool[n];
  for(int i=2;i<n;i++){
    S[i]=true;
  }
  //S[0]=true;
  //S[1]=true;
  int g=sqrt(n);
  for(int i=0;i<=g;i++){
    if(S[i]==true){
      w=i*i;
      while(w<=n){
        S[w]=false;
        w+=i;
      }
    }
  }
  for(int i=2;i<n;i++){
    if(S[i]==true){
      cout<<i<<endl;
    }
  }
  cout<<endl;
  return 0;
}
