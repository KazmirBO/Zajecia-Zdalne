#include <iostream>
#include <vector>
class Point {
public:
  std::vector<int> v;
  Point(int x, int y, int z) {
    v.push_back(x);
    v.push_back(y);
    v.push_back(z);
  }
  void wyswietl() {
    for (auto e : v)
      std::cout << e << " ";
  }
};
int main(int argc, char const *argv[]) {
  int x = (std::cin >> (std::cout << "x: ", x), x);
  // int x; std::cout<<"x: "; std::cin>>x;
  int y = (std::cin >> (std::cout << "y: ", y), y);
  int z = (std::cin >> (std::cout << "z: ", z), z);
  Point p = {x, y, z};
  p.wyswietl();
  std::cout << std::endl;
  return 0;
}
