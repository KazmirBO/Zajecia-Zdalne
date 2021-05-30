#include <iostream>
#include <fstream>
#include <ctime>
#include <string>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  std::fstream plik, plik2;
  int Telefon;
  std::string tmp, k ,p;
  plik.open("telefon.txt", std::ios::out);
  for(int i=0;i<10000;i++){
    do Telefon=rand()%1000000000;
    while(Telefon<100000000);
    //plik<<"+"<<rand()%1000<<" "<<rand()%900+100<<"-"<<rand()%900+100<<
    //"-"<<rand()%900+100<<std::endl;
    plik<<"+"<<rand()%1000<<" "<<Telefon<<std::endl;
  }
  plik.close();
  plik.open("telefon.txt", std::ios::in);
  bool poprawne=false;
  std::string panstwo, numer;
  while(poprawne==false){
    plik2.open("kierunkowe.txt", std::ios::in);
    std::cout<<"Podaj panstwo (np Wielka Brytania): ";
    getline(std::cin, p);
    while(!plik2.eof()){
      getline(plik2, panstwo, '*');
      if(panstwo==p){
        getline(plik2, k);
        poprawne=true;
      }else getline(plik2, numer);
    }
    if(poprawne==false) std::cout<<"Podales zle panstwo."<<std::endl;
    else std::cout<<"Znaleziono panstwo, oto wyniki: "<<std::endl;
    plik2.close();
  }
  k="+"+k;
  while(!plik.eof()){
    getline(plik,tmp,' ');
    if(tmp==k){
      std::cout<<tmp<<" ";
      getline(plik,tmp);
      std::cout<<tmp<<std::endl;
    } else getline(plik,tmp);
  }
  nl;
  plik.close();
  return 0;
}
