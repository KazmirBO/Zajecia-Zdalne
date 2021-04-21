#include <iostream>
int licz(int S[], int m, int n){
  int x, y;
  int tab[n+1][m];
  for(int i=0;i<m;++i) tab[0][i]=1;
  for(int i=1;i<n+1;++i){
    for(int j=0;j<m;j++){
      if(i-S[j]>=0) x=tab[i-S[j]][j];
      else x=0;
      if(j>=1) y=tab[i][j-1];
      else y=0;
      tab[i][j]=x+y;
    }
  }
  return tab[n][m-1];
}
int main(int argc, char const *argv[]) {
  int S[]={1,3,4};
  int m=3;
  int n=6;
  std::cout<<licz(S,m,n)<<std::endl;
  return 0;
}
