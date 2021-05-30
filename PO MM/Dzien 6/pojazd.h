#ifndef POJAZD_H
#define POJAZD_H
#include <string>
class Pojazd{
private:
  std::string marka;
  int rok_produkcji;
  int przebieg;
  double cena;
public:
  Pojazd(){
    marka="";
    rok_produkcji=0;
    przebieg=0;
    cena=0.0;
  }
  Pojazd(std::string marka_auta, int rok_auta, int przebieg_auta,
    double cena_auta){
      marka=marka_auta;
      rok_produkcji=rok_auta;
      przebieg=przebieg_auta;
      cena=cena_auta;
    }
    std::string getMarka() const{
      return marka;
    }
    int getRok() const{
      return rok_produkcji;
    }
    int getPrzebieg() const{
      return przebieg;
    }
    double getCena() const{
      return cena;
    }
};
#endif
