#include "data.h"
#include <iostream>
int main(int argc, char const *argv[]) {
  int Przesuniecie;
  char Wybor;
  Data DataOld(2020, 1, 1, 10, 10);
  Data DataNew;
  std::cout << DataOld << std::endl;
  std::cout << "Co chcesz zrobic?\n"
               "\t+ Dodawanie,\n"
               "\t- Odejmowanie,\n\n"
               "\tWybierz: ";
  Wybor = getchar();
  std::cout << "O jaka wartosc (minuty): ";
  std::cin >> Przesuniecie;
  DataNew.Zmien_czas(Przesuniecie);
  if (Wybor == '+') {
    DataOld = DataOld + DataNew;
    DataOld.Dodawanie();
  } else if (Wybor == '-') {
    DataOld = DataOld - DataNew;
    DataOld.Odejmowanie();
  }
  std::cout << DataOld << std::endl;
  std::cout << std::endl;
  return 0;
}
