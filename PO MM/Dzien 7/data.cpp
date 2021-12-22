#include "data.h"
#include <iostream>
void Data::Zmien_czas(int czas) { Min += czas; }
Data::Data(int NewRok, int NewMies, int NewDzien, int NewGodz, int NewMin) {
  Rok = NewRok;
  Mies = NewMies;
  Dzien = NewDzien;
  Godz = NewGodz;
  Min = NewMin;
}
Data Data::operator+(const Data &b) const {
  return Data(Rok + b.Rok, Mies + b.Mies, Dzien + b.Dzien, Godz + b.Godz,
              Min + b.Min);
}
Data::Data() { Rok = Mies = Dzien = Godz = Min = 0; }
Data Data::operator-(const Data &b) const {
  return Data(Rok - b.Rok, Mies - b.Mies, Dzien - b.Dzien, Godz - b.Godz,
              Min - b.Min);
}
std::ostream &operator<<(std::ostream &os, const Data &v) {
  os << "Data: " << v.Rok << "-" << v.Mies << "-" << v.Dzien << " " << v.Godz
     << ":" << v.Min;
  return os;
}
void Data::Dodawanie() {
  if (Min >= 60) {
    while (Min >= 60) {
      Min -= 60;
      Godz++;
    }
  }
  if (Godz >= 24) {
    while (Godz >= 24) {
      Godz -= 24;
      Dzien++;
    }
  }
  while (Dzien > 31) {
    if (Mies == 1 || Mies == 3 || Mies == 5 || Mies == 7 || Mies == 8 ||
        Mies == 10 || Mies == 12) {
      if (Dzien > 31) {
        Dzien -= 31;
        Mies++;
      }
    } else if (Mies == 4 || Mies == 6 || Mies == 9 || Mies == 11) {
      if (Dzien > 30) {
        Dzien -= 30;
        Mies++;
      }
    } else if (Rok % 4 == 0 && Mies == 2) {
      if (Dzien > 29) {
        Dzien -= 29;
        Mies++;
      }
    } else if (Mies == 2) {
      if (Dzien > 28) {
        Dzien -= 28;
        Mies++;
      }
    }
  }
  if (Mies > 12) {
    while (Mies > 12) {
      Mies -= 12;
      Rok++;
    }
  }
}
void Data::Odejmowanie() {
  if (Min <= 0) {
    while (Min < 0) {
      Min += 60;
      Godz--;
    }
  }
  if (Godz <= 0) {
    while (Godz < 0) {
      Godz += 24;
      Dzien--;
    }
  }
  while (Dzien < 0) {
    if (Mies == 1 || Mies == 3 || Mies == 5 || Mies == 7 || Mies == 8 ||
        Mies == 10 || Mies == 12) {
      if (Dzien <= 0) {
        Dzien += 31;
        Mies--;
      }
    } else if (Mies == 4 || Mies == 6 || Mies == 9 || Mies == 11) {
      if (Dzien <= 0) {
        Dzien += 30;
        Mies--;
      }
    } else if (Rok % 4 == 0 && Mies == 2) {
      if (Dzien <= 0) {
        Dzien += 29;
        Mies--;
      }
    } else if (Mies == 2) {
      if (Dzien <= 0) {
        Dzien += 28;
        Mies--;
      }
    }
    if (Mies <= 0) {
      while (Mies <= 0) {
        Mies += 12;
        Rok--;
      }
    }
  }
}
