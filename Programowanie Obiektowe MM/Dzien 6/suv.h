#ifndef SUV_H
#define SUV_H
#include <string>
class Suv:public Pojazd{
private:
  int ile_pasazerow;
public:
  Suv():Pojazd(){
    ile_pasazerow=0;
  }
  Suv(std::string marka_auta, int rok_auta,
    int przebieg_auta, double cena_auta, int pasazerowie_auta)
    :Pojazd(marka_auta, rok_auta, przebieg_auta, cena_auta){
      ile_pasazerow=pasazerowie_auta;
    }
    int getMiejsca(){
      return ile_pasazerow;
    }
};
#endif
