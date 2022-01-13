#include <bitset>
#include <iostream>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::bitset<8> bit(12);
  std::cout << bit.to_string() << std::endl;
  std::cout << bit[2] << std::endl;
  bit[2].flip();
  std::cout << bit.to_string() << std::endl;
  std::cout << bit[2] << std::endl;
  nl;
  return 0;
}
