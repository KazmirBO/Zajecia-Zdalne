#include <cmath>
#include <ctime>
#include <iostream>
#define nl std::cout << std::endl
class punkt2d {
public:
  float x, y;
  float odl();
};
float punkt2d::odl() { return sqrt(pow(x, 2) + pow(y, 2)); }
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  int n = 10;
  punkt2d ptk[n];
  float wyniki[n];
  for (int i = 0; i < n; i++) {
    ptk[i].x = rand() % 10;
    ptk[i].y = rand() % 10;
  }
  float tmp;
  for (int i = 0; i < n; i++)
    wyniki[i] = ptk[i].odl();
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < i; j++) {
      if (wyniki[i] < wyniki[i + 1]) {
        tmp = wyniki[i];
        wyniki[i] = wyniki[i + 1];
        wyniki[i + i] = tmp;
      }
    }
  }
  std::cout << "Najwieksza odleglosc wynosi = " << wyniki[0] << std::endl;
  nl;
  return 0;
}
