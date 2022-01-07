#include <iostream>
#include <random>
#include <vector>
int main() {
  std::random_device(rnd);
  std::mt19937 gen(rnd());
  std::uniform_int_distribution<> dist(1, 100);
  std::vector<int> dane;
  int n = 50;
  int szukana;
  int tmp = 0;
  int maks, mini, ktora_max, ktora_min;
  bool czyjest = false;
  std::cout << "Podaj szukana liczbe: ";
  std::cin >> szukana;
  for (int i = 0; i < n; i++)
    dane.push_back(dist(gen));
  /*  dane.push_back(1);
    dane.push_back(10);
    dane.push_back(7);
    dane.push_back(8);
    dane.push_back(6);
    dane.push_back(5);
    dane.push_back(2);
  */ std::cout << "Ile elementow w wektorze: " << dane.size() << std::endl;
  maks = dane[0];
  mini = dane[0];
  ktora_max = 0;
  ktora_min = 0;
  for (auto e : dane) {
    if (e == szukana) {
      czyjest = true;
      std::cout << e << "=>" << tmp << std::endl;
    }
    if (maks < e) {
      maks = e;
      ktora_max = tmp;
    }
    if (mini > e) {
      mini = e;
      ktora_min = tmp;
    }
    tmp++;
  }
  if (!czyjest)
    std::cout << "Liczba nie wystepuje!" << std::endl;
  for (auto e : dane)
    std::cout << e << " ";
  std::cout << std::endl;
  std::cout << "Maks wynosi: " << maks << " i jest na pozycji: " << ktora_max
            << std::endl;
  std::cout << "Min wynosi: " << mini << " i jest na pozycji: " << ktora_min
            << std::endl;
  /*  dane.pop_back();
    for(int i=0;i<dane.size();i++) std::cout<<dane[i]<<" ";
  */ std::cout << std::endl;
  return 0;
}
