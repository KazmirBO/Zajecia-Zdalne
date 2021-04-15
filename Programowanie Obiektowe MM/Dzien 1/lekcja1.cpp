#include <iostream>
using namespace std;
int main(){
  srand(time(NULL));
  cout<<"Hello World!"<<endl;
  int a;
  int n;
  string napis;
  bool b;
  b=true;
  cout<<"podaj dlugosc tablicy"<<endl;
  cin>>n;
  int *tab = new int[n];
  for(int i=0;i<n;i++){
    tab[i]=rand()%101-50;
    cout<<tab[i]<<"\t";
  }
  cout<<endl;
  int tablica[10]={0};
  for(auto e:tablica){
    cout<<e<<"\t";
  }
  cout<<endl<<"podaj a"<<endl;
  cin>>a;
  cin.ignore();
  cout<<"Podales "<<a<<endl;
  if(b){
    cout<<"Podaj cos"<<endl;
    getline(cin,napis);
    cout<<"podales "<<napis<<endl;
    cout<<napis[7]<<endl;
  }
  return 0;
}
