#include <iostream>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::vector<std::string> miasta;
  std::string tmp;
  while (miasta.size() < 3) {
    std::cin >> tmp;
    miasta.push_back(tmp);
  }
  try {
    int num;
    std::cin >> num;
    std::cout << miasta.at(num) << std::endl;
  } catch (std::logic_error &e) {
    std::cerr << e.what();
  }
  nl;
  return 0;
}
