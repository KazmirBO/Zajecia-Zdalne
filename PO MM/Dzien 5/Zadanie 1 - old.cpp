#include <ctime>
#include <iostream>
#include <unistd.h>
class Kwadrat;
class Pionek {
  int x, y;
  std::string nazwa;

public:
  void ruch() {
    x += (rand() % 7) - 3;
    y += (rand() % 7) - 3;
  }
  Pionek(int a, int b, std::string opis);
  friend bool SprCzy(Pionek Pion, Pionek Bialy[], Pionek Czarny[], int IleB,
                     int IleC);
  friend int poza(Pionek &p, Kwadrat &k);
  friend void Graphic(Pionek Bialy[], Pionek Czarny[], Kwadrat Plansza,
                      int IleB, int IleC);
};
class Kwadrat {
  int x, y;
  int bok;
  std::string nazwa;

public:
  Kwadrat(int a, int b, int db, std::string opis);
  friend int poza(Pionek &p, Kwadrat &k);
  friend void Graphic(Pionek Bialy[], Pionek Czarny[], Kwadrat Plansza,
                      int IleB, int IleC);
};
Pionek::Pionek(int a, int b, std::string opis) {
  x = a;
  y = b;
  nazwa = opis;
}
Kwadrat::Kwadrat(int a, int b, int db, std::string opis) {
  x = a;
  y = b;
  bok = db;
  nazwa = opis;
}
int poza(Pionek &pt, Kwadrat &kw) {
  // std::cout<<pt.x<<">="<<kw.x<<" "<<pt.x<<"<="<<kw.x+kw.bok<<" "<<pt.y<<">="
  //<<kw.y<<" "<<pt.y<<"<="<<kw.y+kw.bok<<std::endl<<std::endl;
  if (((pt.x > kw.x) && (pt.x < (kw.x + kw.bok))) &&
      ((pt.y > kw.y) && (pt.y < (kw.y + kw.bok)))) {
    return 1;
  } else
    std::cout << "Pionek: " << pt.nazwa << " wypadl poza " << kw.nazwa
              << std::endl;
  return 0;
}
void Graphic(Pionek Bialy[], Pionek Czarny[], Kwadrat Plansza, int IleC,
             int IleB);
bool SprCzy(Pionek Pion, Pionek Bialy[], Pionek Czarny[], int IleB, int IleC) {
  for (int i = 0; i < IleB; i++) {
    if (Pion.nazwa != Bialy[i].nazwa) {
      if (Pion.x == Bialy[i].x && Pion.y == Bialy[i].y) {
        Pion.ruch();
        return 1;
      }
    }
  }
  for (int i = 0; i < IleC; i++) {
    if (Pion.nazwa != Czarny[i].nazwa) {
      if (Pion.x == Czarny[i].x && Pion.y == Czarny[i].y) {
        Pion.ruch();
        return 1;
      }
    }
  }
  return 0;
}
bool Gra(int B, int C, int IleB, int IleC, bool Czygra, Pionek Czarny[],
         Pionek Bialy[], Kwadrat Plansza) {
  while (Czygra) {
    Graphic(Bialy, Czarny, Plansza, IleB, IleC);
    sleep(1);
    system("clear");
    Bialy[B % IleB].ruch();
    while (SprCzy(Bialy[B % IleB], Bialy, Czarny, IleB, IleC))
      ;
    if (poza(Bialy[B % IleB], Plansza)) {
      B++;
    } else {
      if (B % IleB < 2) {
        Bialy[B % IleB] = Bialy[IleB - 1];
      }
      IleB--;
    }
    if (IleB <= 0)
      return 1;
    Graphic(Bialy, Czarny, Plansza, IleB, IleC);
    sleep(1);
    system("clear");
    Czarny[C % IleC].ruch();
    while (SprCzy(Czarny[C % IleC], Bialy, Czarny, IleB, IleC))
      ;
    if (poza(Czarny[C % IleC], Plansza)) {
      C++;
    } else {
      if (C % IleC < 2) {
        Czarny[C % IleC] = Czarny[IleC - 1];
      }
      IleC--;
    }
    if (IleC <= 0)
      return 0;
  }
  return 0;
}
void Graphic(Pionek Bialy[], Pionek Czarny[], Kwadrat Plansza, int IleB,
             int IleC) {
  char tab[Plansza.bok][Plansza.bok];
  for (int i = 0; i < Plansza.bok; i++) {
    for (int j = 0; j < Plansza.bok; j++) {
      tab[i][j] = '.';
    }
  }
  for (int i = 0; i < IleB; i++) {
    tab[Bialy[i].x][Bialy[i].y] = 'B';
  }
  for (int i = 0; i < IleC; i++) {
    tab[Czarny[i].x][Czarny[i].y] = 'C';
  }
  for (int i = 0; i < Plansza.bok; i++) {
    for (int j = 0; j < Plansza.bok; j++) {
      std::cout << tab[i][j];
    }
    std::cout << std::endl;
  }
  std::cout << std::endl;
}
int main() {
  srand(time(NULL));
  bool Czygra = true, Wygral;
  int B = 3, IleB = 3, C = 3, IleC = 3;
  Pionek Czarny[3] = {{13, 14, "CKon"}, {14, 13, "CPion"}, {15, 15, "CHetman"}};
  Pionek Bialy[3] = {{3, 4, "BKon"}, {4, 3, "BPion"}, {5, 5, "BHetman"}};
  Kwadrat Plansza(0, 0, 20, "Plansza");
  system("clear");
  Wygral = Gra(B, C, IleB, IleC, Czygra, Czarny, Bialy, Plansza);
  if (Wygral)
    std::cout << "Wygral gracz grajacy Czarnymi pionkami." << std::endl;
  else
    std::cout << "Wygral gracz grajacy Bialymi pionkami." << std::endl;
  return 0;
}
