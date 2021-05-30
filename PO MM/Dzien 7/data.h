#ifndef DATA_H
#define DATA_H
#include <ostream>
class Data{
private:
  int Rok, Mies, Dzien, Godz, Min;
public:
  void Zmien_czas(int czas);
  Data(int NewRok, int NewMiesiac, int NewDzien, int NewGodz, int NewMin);
  Data();
  Data operator+(const Data &b) const;
  Data operator-(const Data &b) const;
  friend std::ostream &operator<<(std::ostream &os, const Data &v);
  void Dodawanie();
  void Odejmowanie();
};
#endif
