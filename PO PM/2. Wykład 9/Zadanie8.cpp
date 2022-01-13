#include <bitset>
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  const int r = 4;
  std::bitset<r> bit1(8);
  std::bitset<r> bit2(13);
  std::cout << bit1.to_string() << std::endl;
  std::cout << bit2.to_string() << std::endl;
  nl;
  return 0;
}
