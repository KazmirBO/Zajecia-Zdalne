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
public:
  void wyswietl();
  void wprowadz();
};
void Kot::wprowadz(){
  cout<<"Podaj imie kota: ";
  cin>>imie;
  cout<<"Podaj wage kota: ";
  cin>>waga;
}
void Kot::wyswietl(){
  cout<<endl<<"Nasz kot nazywa się "<<imie<<" oraz wazy "<<waga<<" kg."<<endl;
}
int main(){
  Kot klasa;
  klasa.wprowadz();
  klasa.wyswietl();
  cout<<endl;
  return 0;
}
