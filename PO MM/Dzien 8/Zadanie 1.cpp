#include <iostream>
double Dziel(int dzielna, int dzielnik) {
  if (dzielnik == 0) {
    std::string wyjatek = "Nie dzielimy przez zero!!!";
    throw wyjatek;
  }
  return static_cast<double>(dzielna) / dzielnik;
}
int main(int argc, char const *argv[]) {
  int num1, num2;
  double iloraz;
  std::cout << "Podaj dzielna: ";
  std::cin >> num1;
  std::cout << "Podaj dzielik: ";
  std::cin >> num2;
  try {
    iloraz = Dziel(num1, num2);
    std::cout << "Wynik dzielenia to: " << iloraz << std::endl;
  } catch (std::string wyjatek) {
    std::cout << wyjatek << std::endl;
  }
  std::cout << std::endl;
  return 0;
}
