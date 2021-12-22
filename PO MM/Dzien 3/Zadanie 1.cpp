/*
Napisz zgodnie z zasadami programowania obiektowego program, który w tablicy
10×10 umieszcza losowo na przekątnej liczby od 0 do 9, a poza nią zera.
Dodatkowo oblicza on sumę liczb znajdujących się na przekątnej.

Klasa powinna zawierać trzy metody:
 czytaj_dane() — umieszcza dane w tablicy;
 przetworz_dane() — oblicza i wyświetla sumę liczb znajdujących
się na przekątnej;
 wyswietl_wynik() — pokazuje zawartość tablicy na ekranie
monitora.
*/
#include <ctime>
#include <iostream>
class Lekcja {
public:
  int tab[10][10];
  void czytaj_dane();
  void przetworz_dane();
  void wyswietl_wynik();
};
void Lekcja::czytaj_dane() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++)
      tab[i][j] = 0;
  }
  for (int i = 0; i < 10; i++) {
    tab[i][i] = rand() % 10;
  }
}
void Lekcja::przetworz_dane() {
  int suma = 0;
  for (int i = 0; i < 10; i++) {
    suma += tab[i][i];
  }
  std::cout << "Suma wynosi: " << suma << std::endl;
}
void Lekcja::wyswietl_wynik() {
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      std::cout << tab[i][j] << ", ";
    }
    std::cout << std::endl;
  }
}
int main() {
  srand(time(NULL));
  Lekcja zadanie;
  zadanie.czytaj_dane();
  zadanie.przetworz_dane();
  zadanie.wyswietl_wynik();
  std::cout << std::endl;
  return 0;
}
