#include <iostream>
using namespace std;
void bin(int a) {
  if (a > 0) {
    bin(a / 2);
    cout << a % 2;
  }
}
int main() {
  int a;
  cout << "Podaj a:";
  cin >> a;
  cout << "Wynik:";
  bin(a);
  cout << endl;
  return 0;
}
