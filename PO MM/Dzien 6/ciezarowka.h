#ifndef CIEZAROWKA_H
#define CIEZAROWKA_H
#include <string>
class Ciezarowka:public Pojazd{
private:
  std::string rodzajNapedu;
public:
  Ciezarowka():Pojazd(){
    rodzajNapedu="";
  }
  Ciezarowka(std::string marka_auta, int rok_auta,
    int przebieg_auta, double cena_auta, std::string naped_auta)
    :Pojazd(marka_auta, rok_auta, przebieg_auta, cena_auta){
      rodzajNapedu=naped_auta;
    }
    std::string getNaped(){
      return rodzajNapedu;
    }
};
#endif
