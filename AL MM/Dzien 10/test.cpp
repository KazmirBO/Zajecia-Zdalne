#include <iostream>
#include <vector>
using namespace std;
int main()
{
  int m,a,b;
  cout<<"ilosc krawedzi"<<endl;
  cin>>m;
  vector<int>tab[m+1];
  for(int i=0;i<=m;i++){
    cout<<"wpisz sasiadow"<<endl;
    cin>>a>>b;
    tab[a].push_back(b);
    tab[b].push_back(a);
    }
  cout<<endl;
  for(int i=1;i<=m;i++){
    cout<<i<<"  ";
    for(int j=0;j<tab[i].size();j++){
      cout<<tab[i][j]<<", ";
    }
    cout<<endl;
  }
  return 0;
}
