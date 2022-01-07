#include <iostream>
using namespace std;
int sum(int a, int wynik = 0) {
  if (a == 0)
    return a;
  else {
    return sum(a / 10) + a % 10;
  }
}
int main() {
  int a;
  cout << "Podaj wartosc: ";
  cin >> a;
  cout << "Wynik: " << sum(a) << endl;
  cout << endl;
  return 0;
}
