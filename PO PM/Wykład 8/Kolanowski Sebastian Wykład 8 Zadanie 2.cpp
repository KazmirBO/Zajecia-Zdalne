#include <fstream>
#include <iostream>
#define nl std::cout << std::endl
class Pracownik {
public:
  char nazwisko[30], miejsce_urodzenia[30];
  float pensja;
  void SetPracownik();
  std::string GetNazwisko();
  std::string GetMiejsce();
  float GetPensja();
};
void Pracownik::SetPracownik() {
  std::cout << "Podaj nazwisko: ";
  std::cin >> nazwisko;
  std::cout << "Podaj miejsce urodzenia: ";
  std::cin >> miejsce_urodzenia;
  std::cout << "Podaj pensje: ";
  std::cin >> pensja;
  nl;
}
std::string Pracownik::GetNazwisko() { return nazwisko; }
std::string Pracownik::GetMiejsce() { return miejsce_urodzenia; }
float Pracownik::GetPensja() { return pensja; }
int main(int argc, char const *argv[]) {
  std::fstream plik;
  plik.open("Pracownicy.txt", std::ios::out);
  Pracownik p1, p2, p3;
  p1.SetPracownik();
  p2.SetPracownik();
  p3.SetPracownik();
  plik << "Nazwisko: " << p1.GetNazwisko() << std::endl;
  plik << "Miejsce Urodzenia: " << p1.GetMiejsce() << std::endl;
  plik << "Pensja: " << p1.GetPensja() << std::endl;
  plik << "Nazwisko: " << p2.GetNazwisko() << std::endl;
  plik << "Miejsce Urodzenia: " << p2.GetMiejsce() << std::endl;
  plik << "Pensja: " << p2.GetPensja() << std::endl;
  plik << "Nazwisko: " << p3.GetNazwisko() << std::endl;
  plik << "Miejsce Urodzenia: " << p3.GetMiejsce() << std::endl;
  plik << "Pensja: " << p3.GetPensja() << std::endl;
  nl;
  plik.close();
  return 0;
}
