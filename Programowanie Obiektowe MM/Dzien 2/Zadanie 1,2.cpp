#include <iostream>
#include <cmath>
using namespace std;
class Osoba{
private:
  string imie;
  float wzrost;
  float waga;
public:
  void SetImie(string name){
    imie=name;
  }
  string GetImie(){
    return imie;
  }
  void SetWzr(float wzr){
    wzrost=wzr;
  }
  float GetWzr(){
    return wzrost;
  }
  void SetWaga(float wag){
    waga=wag;
  }
  float GetWaga(){
    return waga;
  }
  float BMI(){
    return waga/pow(wzrost,2);
  }
};
int main(){
  float m,kg;
  Osoba Jan;
  Jan.SetImie("Janusz");
  cout<<"Podaj wzrost: ";
  cin>>m;
  Jan.SetWzr(m);
  cout<<"Podaj wage: ";
  cin>>kg;
  Jan.SetWaga(kg);
  cout<<"BMI wynosi: "<<Jan.BMI();
  cout<<endl;
  return 0;
}
