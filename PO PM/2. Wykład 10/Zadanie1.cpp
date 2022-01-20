#include <iostream>
struct Point {
  int x, y, z;
};
int main(int argc, char const *argv[]) {
  int x = (std::cin >> (std::cout << "x: ", x), x);
  // int x; std::cout<<"x: "; std::cin>>x;
  int y = (std::cin >> (std::cout << "y: ", y), y);
  int z = (std::cin >> (std::cout << "z: ", z), z);
  Point p = {x, y, z};
  std::cout << p.x << " " << p.y << " " << p.z << std::endl;
  return 0;
}
