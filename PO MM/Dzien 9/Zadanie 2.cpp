#include <iostream>
template <class T, class T2> class tablica {
public:
  tablica(int rozmiar);
  T2 suma(void);
  void wypisz_tablice(void);
  int dodaj_element(T);

private:
  T *dane;
  int rozmiar;
  int indeks;
};
template <class T, class T2> tablica<T, T2>::tablica(int rozmiar) {
  dane = new T[rozmiar];
  tablica::rozmiar = rozmiar;
  tablica::indeks = 0;
}
template <class T, class T2> T2 tablica<T, T2>::suma(void) {
  T2 suma = 0;
  int i;
  for (i = 0; i < indeks; i++)
    suma += dane[i];
  return suma;
}
template <class T, class T2> void tablica<T, T2>::wypisz_tablice(void) {
  for (int i = 0; i < indeks; i++) {
    std::cout << dane[i] << "\t";
  }
  std::cout << std::endl;
}
template <class T, class T2> int tablica<T, T2>::dodaj_element(T liczba) {
  dane[indeks] = liczba;
  indeks++;
  return 0;
}
int main(int argc, char const *argv[]) {
  tablica<int, int> liczby(10);
  tablica<double, double> wartosci(20);
  for (int i = 0; i < 5; i++)
    liczby.dodaj_element(i);
  liczby.wypisz_tablice();
  std::cout << "Suma el. tab= " << liczby.suma() << std::endl;
  for (int i = 0; i < 10; i++)
    wartosci.dodaj_element(i * 0.33);
  wartosci.wypisz_tablice();
  std::cout << "Suma el. tab= " << wartosci.suma() << std::endl;
  std::cout << std::endl;
  return 0;
}
