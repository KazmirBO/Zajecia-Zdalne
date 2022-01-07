#include <iostream>
using namespace std;
int silnia(int n, int tmp, int wynik) {
  if (tmp > n) {
    return wynik;
  } else {
    wynik *= tmp;
    return silnia(n, tmp + 1, wynik);
  }
}
int main(int argc, char *argv[]) {
  int n;
  cout << "Podaj n: ";
  cin >> n;
  cout << "Silnia z " << n << " wynosi: " << silnia(n, 1, 1) << endl;
  cout << endl;
  return 0;
}
