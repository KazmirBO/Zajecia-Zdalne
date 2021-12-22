#ifndef SAMOCHOD_H
#define SAMOCHOD_H
#include <string>
class Samochod : public Pojazd {
private:
  int drzwi;

public:
  Samochod() : Pojazd() { drzwi = 0; }
  Samochod(std::string marka_auta, int rok_auta, int przebieg_auta,
           double cena_auta, int drzwi_auta)
      : Pojazd(marka_auta, rok_auta, przebieg_auta, cena_auta) {
    drzwi = drzwi_auta;
  }
  int getDrzwi() { return drzwi; }
};
#endif
