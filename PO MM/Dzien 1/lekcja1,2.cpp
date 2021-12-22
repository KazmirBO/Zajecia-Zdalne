#include <cmath>
#include <fstream>
#include <iostream>
using namespace std;
int main() {
  fstream plik;
  fstream plik2;
  fstream pro;
  fstream row;
  string tmp;
  int p = 0, r = 0, pom, tab[3];
  plik.open("arkusz2.csv", ios::in);
  plik2.open("wynik.csv", ios::out);
  pro.open("prostokatny.csv", ios::out);
  row.open("rownoramienny.csv", ios::out);
  if (plik.good()) {
    cout << "Mamy kontakt z plikiem." << endl;
    while (!plik.eof()) {
      getline(plik, tmp, ';');
      // a=atoi(tmp.c_str()); //gorsza
      tab[0] = stoi(tmp);
      getline(plik, tmp, ';');
      tab[1] = stoi(tmp);
      getline(plik, tmp);
      tab[2] = stoi(tmp);
      plik2 << tab[0] << ";" << tab[1] << ";" << tab[2]
            << endl;                // wypisuje w domyslnej kolejnosci
      for (int i = 0; i < 3; i++) { // sort by ulatwic pozniejsza prace
        for (int j = 0; j < i; j++) {
          if (tab[i] < tab[j]) {
            pom = tab[j];
            tab[j] = tab[i];
            tab[i] = pom;
          }
        }
      }
      // rownoramienny
      if (tab[0] == tab[1] || tab[0] == tab[2] || tab[1] == tab[2]) {
        row << tab[0] << ";" << tab[1] << ";" << tab[2] << endl;
        r++;
      }
      // prostokatny
      if (pow(tab[0], 2) + pow(tab[1], 2) == pow(tab[2], 2)) {
        pro << tab[0] << ";" << tab[1] << ";" << tab[2] << endl;
        p++;
      }
    }
    cout << "Prostokatny: " << p << endl << "Rownoramienny: " << r << endl;
  } else {
    cout << "Nie mamy kontaktu z plikiem!" << endl;
  }
  plik.close();
  plik2.close();
  pro.close();
  row.close();
  return 0;
}
