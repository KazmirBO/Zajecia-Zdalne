#include <iostream>
#include <string>
#define nl std::cout << std::endl
int przestepny(int rok) {
  return ((rok % 4 == 0 && rok % 100 != 0) || rok % 400 == 0);
}
int dzienTygodnia(int dzien, int miesiac, int rok) {
  int liczbaDni[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  int dzienRoku, yy, c, g, wynik;
  dzienRoku = dzien + liczbaDni[miesiac - 1];
  if ((miesiac > 2) && (przestepny(rok) == 1))
    dzienRoku++;
  yy = (rok - 1) % 100;
  c = (rok - 1) - yy;
  g = yy + (yy / 4);
  wynik = (((((c / 100) % 4) * 5) + g) % 7);
  wynik += dzienRoku - 1;
  wynik %= 7;
  return wynik;
}
int main(int argc, char const *argv[]) {
  int m, r, d = 1, wynik;
  std::string Calendar[] = {"Mon", "Tue", "Wed", "Thu", "Fri", "Sat", "Sun"};
  int Miesiac[] = {0, 31, 59, 90, 120, 151, 181, 212, 243, 273, 304, 334};
  std::cout << "Podaj miesiac: ";
  std::cin >> m;
  std::cout << "Podaj rok: ";
  std::cin >> r;
  wynik = dzienTygodnia(d, m, r);
  for (auto e : Calendar)
    std::cout << e << "\t";
  nl;
  for (int i = 0; i < wynik; i++)
    std::cout << "\t";
  bool pocz = true;
  int Dni = Miesiac[m] - Miesiac[m - 1], CurrentDay = 1;
  if (m == 2 && przestepny(r))
    Dni++;
  while (CurrentDay <= Dni) {
    for (int i = 0; i < 7 && CurrentDay <= Dni; i++, CurrentDay++) {
      if (pocz) {
        i = wynik;
        pocz = false;
      }
      std::cout << CurrentDay << "\t";
    }
    nl;
  }
  return 0;
}
