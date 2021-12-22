/*
Autor  : Kolanowski Sebastian
Projekt: Zadanie do wykladu
*/
#include <iostream>
using namespace std;
class Kot {
public:
  string imie;
  float waga;
  int wiek;
};
int main() {
  Kot klasa;
  cout << "Podaj imie kota: ";
  cin >> klasa.imie;
  cout << "Podaj wage kota: ";
  cin >> klasa.waga;
  cout << "Podaj wiek kota: ";
  cin >> klasa.wiek;
  cout << "Nasz kot nazywa się " << klasa.imie << ", ma " << klasa.wiek;
  cout << " lat oraz wazy " << klasa.waga << " kg." << endl;
  cout << endl;
  return 0;
}
