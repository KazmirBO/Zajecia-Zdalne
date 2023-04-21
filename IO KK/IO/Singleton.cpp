#include <iostream>
#include <string>
#include <vector>

class Singleton {
private:
  Singleton() {}
  ~Singleton() {}

public:
  std::vector<std::string> dzialania;
  void logger(int x, std::string op, int y, int w) {
    std::string dzialanie =
        std::to_string(x) + op + std::to_string(y) + " = " + std::to_string(w);
    dzialania.push_back(dzialanie);
  }
  static Singleton &getInstance() {
    static Singleton instance;
    return instance;
  }
  std::vector<std::string> getDzialania() { return dzialania; }
};

int main(int argc, const char *argv[]) {
  int x = 0, y = 0;
  int wybor = 0;
  while (true) {
    std::cout << "Co robisz:\n"
                 "1. Dodaje\n"
                 "2. Odejmuje\n"
                 "3. Mnoze\n"
                 "4. Dziele\n"
                 "5. Wyjdz\n"
                 "Wybor:";
    std::cin >> wybor;
    switch (wybor) {
    case 1:
      x = (std::cin >> (std::cout << "Podaj x: ", x), x);
      y = (std::cin >> (std::cout << "Podaj y: ", y), y);
      std::cout << "Wynik to: " << x + y << std::endl;
      Singleton::getInstance().logger(x, " + ", y, x + y);
      break;
    case 2:
      x = (std::cin >> (std::cout << "Podaj x: ", x), x);
      y = (std::cin >> (std::cout << "Podaj y: ", y), y);
      std::cout << "Wynik to: " << x - y << std::endl;
      Singleton::getInstance().logger(x, " - ", y, x - y);
      break;
    case 3:
      x = (std::cin >> (std::cout << "Podaj x: ", x), x);
      y = (std::cin >> (std::cout << "Podaj y: ", y), y);
      std::cout << "Wynik to: " << x * y << std::endl;
      Singleton::getInstance().logger(x, " * ", y, x * y);
      break;
    case 4:
      x = (std::cin >> (std::cout << "Podaj x: ", x), x);
      y = (std::cin >> (std::cout << "Podaj y: ", y), y);
      if (y != 0) {
        std::cout << "Wynik to: " << x / y << std::endl;
        Singleton::getInstance().logger(x, " / ", y, x / y);
      } else
        std::cout << "NIE DZIELIMY PRZEZ 0!" << std::endl;
      break;
    case 5:
      for (auto e : Singleton::getInstance().getDzialania())
        std::cout << e << std::endl;
      std::cin.ignore();
      getchar();
      return 0;
      break;
    default:
      std::cout << "Zla opcja!" << std::endl;
      break;
    }
  }
  return 0;
}
