#include <cmath>
#include <ctime>
#include <iostream>
#include <unistd.h>
class Postac {
public:
  int HP, Mana;
  void GetStat(int N, int D);
  int Atak(int Spell);
  int Czary();
};
void Postac::GetStat(int N, int D) {
  HP = N + rand() % D +
       1; // N - Domyslna wartosc zdrowia, D - Dodatkowy rzut na zdrowie
  Mana = rand() % 11; // Mana = Losowa 0 - 10
}
int Postac::Atak(int Spell) {
  int Obr = (rand() % 6 + 1) + (rand() & 6 + 1); // Obr - Kosc 2d6 do obrazen
  int Def = rand() % 6 + 1;                      // Def - Kosc d6 do obrony
  int Rezultat = Obr - Def + Spell;
  std::cout << "Zadane obrazenia: " << Obr << std::endl;
  std::cout << "Zablokowane obrazenia: " << Def << std::endl;
  if (rand() % 11 == 10) { // Jezeli kosc d10 == 10 dodatkowa kosc obrazen
    int kryt = rand() % 6 + 1;
    std::cout << "Trafienie Krytyczne! Dodatkowe: " << kryt << " obrazen."
              << std::endl;
    Rezultat += kryt;
  }
  std::cout << "Rezultat: " << Rezultat << std::endl;
  return Rezultat; // Wynik zadanych obrazen
}
int Postac::Czary() {
  if (Mana >= 10) {
    Mana -= 10;
    int czar = rand() % 6 + 1; // Kosc d6 do obrazen
    std::cout << "Bohater uzyl czaru zadajac: " << czar << " obrazen."
              << std::endl;
    return czar;
  }
  Mana += 2; // Regeneracja many
  return 0;
}
int main() {
  system("clear"); // GNU/Linux
  // system("cls"); // Windows
  srand(time(NULL));
  int Dif = 10, Runda = 1;
  Postac Bohater, Przeciwnik;
  Bohater.GetStat(30, 10); // Startowe wartosci 30 zdr + los 1-10
  do {
    Przeciwnik.GetStat(Dif, 5); // Startowe wartosci zmienna Dif + los 1-5
    do {
      std::cout << std::endl << "Zdrowie Bohatera: " << Bohater.HP << std::endl;
      std::cout << "Mana Bohatera wynosi: " << Bohater.Mana << std::endl;
      std::cout << "Zdrowie Przeciwnika: " << Przeciwnik.HP << std::endl;
      sleep(1); // 1 sek czekania
      std::cout << std::endl << "Atak Bohatera: " << std::endl;
      Przeciwnik.HP -= Bohater.Atak(Bohater.Czary());
      sleep(1); // again
      std::cout << std::endl << "Atak Przeciwnika: " << std::endl;
      Bohater.HP -= Przeciwnik.Atak(0);
      sleep(2);        // again 2x
      system("clear"); // GNU/Linux // Czyszczenie ekranu po kazdym pojedynku
      // system("cls"); // Windows
    } while (Bohater.HP > 0 && Przeciwnik.HP > 0);
    if (Bohater.HP <= 0) {
      std::cout << "Bohater przegral w " << Runda << " pojedynku." << std::endl;
      return 0;
    } else {
      std::cout << std::endl << "Bohater Zwyciezyl pojedynek." << std::endl;
      sleep(1);
    }
    Runda++;
    Dif += 5;
    Bohater.HP += 5; // Nagroda za wygrana walke
  } while (Bohater.HP > 0);
  std::cout << std::endl;
  return 0;
}
