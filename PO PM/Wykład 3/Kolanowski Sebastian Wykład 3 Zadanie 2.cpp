#include <cmath>
#include <iostream>
class Liczba {
private:
  int wart_x;

public:
  void wczytaj(int &n);
  int wypisz(int &n);
  void nadaj_w(int &n);
  int wartosc();
  double pierwiastek();
};
void Liczba::wczytaj(int &n) {
  std::cout << "Podaj liczbe: ";
  std::cin >> n;
}
int Liczba::wypisz(int &n) { return n; }
void Liczba::nadaj_w(int &n) { wart_x = n; }
int Liczba::wartosc() { return wart_x; }
double Liczba::pierwiastek() { return sqrt(wart_x); }
int main(int argc, char const *argv[]) {
  Liczba liczba;
  int n;
  liczba.wczytaj(n);
  std::cout << "Liczba wynosi: " << liczba.wypisz(n) << std::endl;
  liczba.nadaj_w(n);
  std::cout << "Wart_x wynosi: " << liczba.wartosc() << std::endl;
  std::cout << "Pierwiastek wart_x wynisi: " << liczba.pierwiastek()
            << std::endl;
  std::cout << std::endl;
  return 0;
}
