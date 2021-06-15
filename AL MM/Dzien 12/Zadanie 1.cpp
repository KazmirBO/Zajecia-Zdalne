#include <iostream>
#include <fstream>
#define nl std::cout<<std::endl
class Wiedza{
public:
  float w[4];
  std::string nazwa;
};
class Testowa{
public:
  float w[4];
  std::string nazwa;
};
int main(int argc, char const *argv[]) {
  std::fstream plik;
  std::string tmp;
  int ilosc=0;
  Wiedza wiedza[75];
  Testowa test[75];
  plik.open("Iris.txt", std::ios::in);
  while(ilosc<150){
    if(ilosc%2==0){
      for(int i=0;i<5;i++){
        if(i<4){
          getline(plik,tmp,',');
          wiedza[ilosc/2].w[i]=stof(tmp);
        }
        else{
          getline(plik,tmp);
          wiedza[ilosc/2].nazwa=tmp;
        }
      }
    }
    else{
      for(int i=0;i<5;i++){
        if(i<4){
          getline(plik,tmp,',');
          test[ilosc/2].w[i]=stof(tmp);
        }
        else{
          getline(plik,tmp);
          test[ilosc/2].nazwa=tmp;
        }
      }
    }
    ilosc++;
  }
  float delta=0, x;
  float wynik;
  int traf=0, nietraf=0;
  std::string poprawna;
  for(int k=0;k<75;k++){
    wynik=100;
    for(int i=0;i<75;i++){
      delta=0;
      for(int j=0;j<4;j++){
        x=test[k].w[j]-wiedza[i].w[j];
        if(x<0) x=-x;
        delta+=x;
      }
      //std::cout<<delta<<" "<<wynik<<std::endl;
      if(wynik>delta){
        wynik=delta;
        poprawna=wiedza[i].nazwa;
      }
    }
    if(test[k].nazwa==poprawna) {std::cout<<"Nazwa trafna!"<<std::endl; traf++;}
    else {std::cout<<"Nazwa niepoprawna!"<<std::endl; nietraf++;}
  }
  std::cout<<"Trafione: "<<traf<<std::endl;
  std::cout<<"Nie trafione: "<<nietraf<<std::endl;
  nl;
  return 0;
}
