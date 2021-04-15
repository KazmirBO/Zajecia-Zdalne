/*
Autor  : Kolanowski Sebastian
Projekt: Zadanie do wykladu
*/
#include <iostream>
using namespace std;
class Kot{
private:
  string imie;
  float waga;
};
int main(){
  Kot klasa;
  cout<<"Podaj imie kota: ";
  cin>>klasa.imie;
  cout<<"Podaj wage kota: ";
  cin>>klasa.waga;
  cout<<"Nasz kot nazywa się "<<klasa.imie<<" oraz wazy "<<klasa.waga<<" kg."<<endl;
  cout<<endl;
  return 0;
}
