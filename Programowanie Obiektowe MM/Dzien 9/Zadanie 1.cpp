#include <iostream>
template <class T>
T maks(T a, T b){
  return a>b?a:b;
}
template <class T, class T2>
void wypisz_tablice(T *tablica, T2 licznik){
  T2 indeks;
  for(indeks=0;indeks<licznik;indeks++){
    std::cout<<tablica[indeks]<<"\t";
  }
  std::cout<<std::endl;
}
int main(int argc, char const *argv[]) {
  auto i=59;
  auto j=20;
  std::cout<<"Wieksza wartosc: "<<maks(i, j)<<std::endl;
  auto k1=1.5;
  auto k2=10.78;
  std::cout<<"Wieksza wartosc: "<<maks(k1, k2)<<std::endl;
  std::string s1="Hard";
  std::string s2="Rock";
  std::cout<<"Wieksza wartosc: "<<maks(s1, s2)<<std::endl;
  int strony[]={10,20,30,40,50};
  double ceny[]={10.2,15.4,20.11};
  char tekst[]="HalloMoto!!";
  wypisz_tablice(strony,5);
  wypisz_tablice(ceny,3);
  wypisz_tablice(tekst,11);
  std::cout<<std::endl;
  return 0;
}
