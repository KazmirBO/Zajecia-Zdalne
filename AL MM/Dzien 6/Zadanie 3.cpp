#include <iostream>
void SelectSort(int tab[], int n) {
  int minIndex;
  for (int i = 0; i < n - 1; ++i) {
    minIndex = i;
    for (int j = i + 1; j < n; ++j) {
      if (tab[j] < tab[minIndex])
        minIndex = j;
    }
    std::swap(tab[i], tab[minIndex]);
  }
}
int main(int argc, char const *argv[]) {
  int tab[] = {13, 3, 19, 93, 27, 26, 98, 1};
  int rozm = sizeof(tab) / sizeof(int);
  for (auto e : tab)
    std::cout << e << " ";
  std::cout << std::endl;
  SelectSort(tab, rozm);
  for (auto e : tab)
    std::cout << e << " ";
  std::cout << std::endl;
  return 0;
}
