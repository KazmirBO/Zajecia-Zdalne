#include <algorithm>
#include <iomanip>
#include <iostream>
#include <map>
int main(int argc, char const *argv[]) {
  std::map<std::string, int> meble = {
      {"Kanapa", 4050}, {"Fotel", 1680}, {"Szafa", 2300}};
  double euro =
      (std::cin >> (std::cout << "Podaj kurs euro, np. 4.77: ", euro), euro);
  for (auto e : meble)
    std::cout << e.first << " kosztuje: " << e.second << " zl" << std::endl;
  std::for_each(meble.begin(), meble.end(),
                [&euro](std::pair<std::string, int> m) {
                  std::cout << m.first << " kosztuje: " << std::fixed
                            << std::setprecision(2) << m.second / euro << " eu"
                            << std::endl;
                });
  return 0;
}
