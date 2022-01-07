#include <cmath>
#include <fstream>
#include <iostream>
#define nl std::cout << std::endl
class Kwiaty {
public:
  float t[4], w[4];
  std::string tnazwa, wnazwa;
};
int main(int argc, char const *argv[]) {
  int traf = 0, nietraf = 0;
  float delta = 0, wynik;
  std::string tmp;
  std::fstream plik;
  Kwiaty kw[75];
  plik.open("Iris.txt", std::ios::in);
  for (int ilosc = 0; ilosc < 150; ilosc++) {
    for (int i = 0; i < 5; i++) {
      if (i < 4) {
        getline(plik, tmp, ',');
        kw[ilosc / 2].w[i] = stof(tmp);
      } else
        getline(plik, kw[ilosc / 2].wnazwa);
    }
    ilosc++;
    for (int i = 0; i < 5; i++) {
      if (i < 4) {
        getline(plik, tmp, ',');
        kw[ilosc / 2].t[i] = stof(tmp);
      } else
        getline(plik, kw[ilosc / 2].tnazwa);
    }
  }
  for (int i = 0; i < 75; i++) {
    wynik = 100;
    for (int j = 0; j < 75; j++) {
      delta = 0;
      for (int k = 0; k < 4; k++)
        delta += fabs(kw[i].t[k] - kw[j].w[k]);
      if (wynik > delta) {
        wynik = delta;
        tmp = kw[j].wnazwa;
      }
    }
    if (kw[i].wnazwa == tmp)
      traf++;
    else
      nietraf++;
  }
  std::cout << "Trafione: " << traf << ", nie trafione: " << nietraf
            << std::endl;
  nl;
  plik.close();
  return 0;
}
