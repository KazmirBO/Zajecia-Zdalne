#include <iostream>
void Merge(int tab[], int startIndex, int middleIndex, int endIndex) {
  int totalElements = endIndex - startIndex + 1;
  int *tempArray = new int[totalElements];
  int leftIndex = startIndex;
  int rightIndex = middleIndex + 1;
  int mergedIndex = 0;
  while (leftIndex <= middleIndex && rightIndex <= endIndex) {
    if (tab[leftIndex] <= tab[rightIndex]) {
      tempArray[mergedIndex] = tab[leftIndex];
      ++leftIndex;
    } else {
      tempArray[mergedIndex] = tab[rightIndex];
      ++rightIndex;
    }
    ++mergedIndex;
  }
  while (leftIndex <= middleIndex) {
    tempArray[mergedIndex] = tab[leftIndex];
    ++leftIndex;
    ++mergedIndex;
  }
  while (rightIndex <= endIndex) {
    tempArray[mergedIndex] = tab[rightIndex];
    ++rightIndex;
    ++mergedIndex;
  }
  for (int i = 0; i < totalElements; ++i)
    tab[startIndex + i] = tempArray[i];
  delete[] tempArray;
}
void MergeSort(int tab[], int startIndex, int endIndex) {
  if (startIndex < endIndex) {
    int middleIndex = (startIndex + endIndex) / 2;
    MergeSort(tab, startIndex, middleIndex);
    MergeSort(tab, middleIndex + 1, endIndex);
    Merge(tab, startIndex, middleIndex, endIndex);
  }
}
int main(int argc, char const *argv[]) {
  int tab[] = {7, 1, 5, 9, 3, 6, 8, 2};
  int tabSize = sizeof(tab) / sizeof(*tab);
  std::cout << "Dane poczatkowe: " << std::endl;
  for (auto e : tab)
    std::cout << e << "\t";
  std::cout << std::endl;
  MergeSort(tab, 0, tabSize - 1);
  std::cout << "Dane koncowe: " << std::endl;
  for (auto e : tab)
    std::cout << e << "\t";
  std::cout << std::endl;
  return 0;
}
