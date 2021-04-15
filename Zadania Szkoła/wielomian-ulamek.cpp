/*
Autor: Sebastian Kolanowski
Temat: Wielomiany
Data:
  Rozpoczecie: 15:30 19-11-2020
  Zakonczenie: 23:00 19-11-2020
*/
#include <iostream>
#include <math.h>
using namespace std;
void wielomian(int wielo[],int n,float x){ //sprawdzenie czy do danego x na pewno wychodzi 0
  float wynik=wielo[0];
  for(int i=1;i<n;i++){
    wynik=wynik*x+wielo[i];
  }
  cout<<"Wartosc wielomianu: "<<wynik<<endl;
}
int main(){
  poczatek:
  int i=0,temp=1;
  cout<<"Podaj stopien wielomianu: ";
  cin>>i; //nadanie stopnia wielomianu
  int dziel[100],wielo[i+1];
  for(int j=0;j<=i;j++){
    cout<<"Podaj wspolczynnik x"<<i-j<<": "; //testowe - 16x^3-28x^2-4x+3>0
    cin>>wielo[j];
  }
  int pomoc[i+1];
  for(int z=0;z<=i;z++){
    if(wielo[z]<0){
      pomoc[z]=wielo[z]*-1;
    }
    else{
      pomoc[z]=wielo[z];
    }
    for(int j=1;j<=pomoc[z];j++){ //sprawdzanie dzielnikow
	     if(pomoc[z]%j==0){
         dziel[0]=0; //ewentualne zabezpieczenie z 0 - male problemy
         dziel[temp]=j;
         //cout << dziel[temp] << endl;
         temp++;
         dziel[temp]=(-j);
         //cout << dziel[temp] << endl;
         temp++;
       }
    }
  }
  int lop,spraw;
  for(int j=0;j<=temp;j++){
    spraw=0;
    lop=0;
    for(int pot=i,h=0;h<=i;h++,pot--){ //sprawdzanie dla jakich wartosci x wielomian ma wartosc 0
      spraw=spraw+wielo[h]*pow(dziel[j],pot);
    }
    if(spraw==0){
      for(int y=0;y<j;y++){ //petla do zablokowania powtarzania wartosci x
        if(dziel[y]==dziel[j]){
          lop++;
        }
      }
      if(lop==0){ //wyswietlenie x
        cout<<"x= "<<dziel[j]<<endl;
      }
    }
  }
  float x;
  cout<<"Wybiez x: ";
  cin>>x; //wybor wartosci x
  int n=sizeof(wielo)/sizeof(wielo[0]);//sizeof - obliczenie ilosci zmiennych w tablicy
  wielomian(wielo,n,x); //wykonanie funkcji
  char tn;
  cout<<"Czy chcesz sprobowac jeszcze raz? (T/N): ";
  cin>>tn;
  if(tn=='T' || tn=='t'){
    cout<<endl<<endl;
    goto poczatek;
  }
  return 0;
}
