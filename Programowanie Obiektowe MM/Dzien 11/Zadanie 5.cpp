#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <locale>
#define nl std::cout<<std::endl
int main(){
  setlocale( LC_ALL, "pl_PL.UTF-8" );
  std::fstream plik, plik2;
  plik.open("w-pustyni-i-w-puszczy.txt", std::ios::in);
  plik2.open("Znaki.txt", std::ios::out);
  std::string napis;
  std::string Znak="H";
  std::vector<int> Ilosc={1};
  int Count=0, Akapity=0, Wyrazy=0, a, r;
  bool pow;
  while(!plik.eof()){
    std::getline(plik, napis, ' ');
    a=napis.length();
    Count++;
    for(int i=0;i<a;i++){
      pow=false;
      r=Znak.length();
      for(int j=0;j<r;j++){
        if(Znak[j]==napis[i]){
          pow=true;
          Ilosc[j]++;
        }
      }
      if(pow==false){
        Znak.push_back(napis[i]);
        Ilosc.push_back(1);
      }
    }
  }
  r=Znak.length();
  for(int i=0;i<r;i++){
    if(Znak[i]!=10){
      plik2<<"Znak: "<<Znak[i]<<" wystepuje: "<<
      Ilosc[i]<<" razy."<<std::endl;
      Count+=Ilosc[i];
    }else Akapity=Ilosc[i];
  }
  plik.close();
  plik.open("w-pustyni-i-w-puszczy.txt", std::ios::in);
  while(!plik.eof()){
    std::getline(plik, napis, ' ');
    a=napis.length();
    Wyrazy++;
  }
  plik2<<std::endl<<"Łączna liczba znaków: "<<Count<<std::endl;
  plik2<<"Łączna liczba akapitów: "<<Akapity<<std::endl;
  plik2<<"Łączna liczba Wyrazów: "<<Wyrazy<<std::endl;
  nl;
  plik.close();
  plik2.close();
  return 0;
}
