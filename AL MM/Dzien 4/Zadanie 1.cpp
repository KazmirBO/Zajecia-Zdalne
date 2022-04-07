#include <algorithm>
#include <cmath>
#include <ctime>
#include <iostream>
void Wprowadzanie(int tab[], int N) {
  for (int i = N; i > 0; i--)
    tab[N - i] = i;
}
void Wprowadzanie2(int tab[], int N) {
  for (int i = 0; i < N; i++)
    tab[i] = i + 1;
  if (N == 10)
    std::swap(tab[2], tab[7]);
  else
    std::swap(tab[250], tab[750]);
}
void Losowanie(int tab[], int N) {
  for (int i = 0; i < N; i++)
    tab[i] = rand() % 1000 + 1;
}
void Wyswietl(int tab[], int N) {
  for (int i = 0; i < N; i++)
    std::cout << tab[i] << " ";
  std::cout << std::endl;
}
void Tmp(int tab[], int tab_t[], int N) {
  for (int i = 0; i < N; i++)
    tab_t[i] = tab[i];
}
void BabelkoweSort(int tab[], int N) {
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (tab[i] < tab[j])
        std::swap(tab[i], tab[j]);
    }
  }
}
void MergeSort(int tab[], int startIndex, int middleIndex, int endIndex) {
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
    MergeSort(tab, startIndex, middleIndex, endIndex);
  }
}
int Podzial(int tab[], int startIndex, int endIndex) {
  int pivot = tab[startIndex];
  int middleIndex = startIndex;
  for (int i = startIndex; i <= endIndex; ++i) {
    if (tab[i] < pivot) {
      ++middleIndex;
      std::swap(tab[i], tab[middleIndex]);
    }
  }
  std::swap(tab[startIndex], tab[middleIndex]);
  return middleIndex;
}
void QuickSort(int tab[], int startIndex, int endIndex) {
  if (startIndex < endIndex) {
    int pivotIndex = Podzial(tab, startIndex, endIndex);
    QuickSort(tab, startIndex, pivotIndex - 1);
    QuickSort(tab, pivotIndex + 1, endIndex);
  }
}
void InsertionSort(int tab[], int N) {
  int tmp;
  for (int i = 1; i < N; i++) {
    tmp = tab[i];
    for (int j = i - 1; j >= 0 && tab[j] > tmp; j--) {
      tab[j + 1] = tab[j];
      tab[j] = tmp;
    }
  }
}
void SelectSort(int tab[], int N) {
  int minIndex;
  for (int i = 0; i < N - 1; ++i) {
    minIndex = i;
    for (int j = i + 1; j < N; ++j) {
      if (tab[j] < tab[minIndex])
        minIndex = j;
    }
    std::swap(tab[i], tab[minIndex]);
  }
}
void ShakerSort(int tab[], int N) {
  int left = 1;
  int right = N - 1;
  int k = N - 1;
  do {
    for (int j = right; j >= left; j--) {
      if (tab[j - 1] > tab[j]) {
        std::swap(tab[j - 1], tab[j]);
        k = j;
      }
    }
    left = k + 1;
    for (int j = left; j <= right; j++) {
      if (tab[j - 1] > tab[j]) {
        std::swap(tab[j - 1], tab[j]);
        k = j;
      }
    }
    right = k - 1;
  } while (left <= right);
}
void DumbSort(int tab[], int N) {
  int i = 0;
  do {
    if (tab[i] > tab[i + 1]) {
      std::swap(tab[i], tab[i + 1]);
      i = 0;
      continue;
    }
    i++;
  } while (i < N - 1);
}

int main() {
  srand(time(NULL));
  int n = 10, tab[n];
  Losowanie(tab, n);
  for (auto e : tab)
    std::cout << e << " ";
  std::cout << std::endl;
  BabelkoweSort(tab, n);
  for (auto e : tab)
    std::cout << e << " ";
  std::cout << std::endl;
  InsertionSort(tab, n);
  for (auto e : tab)
    std::cout << e << " ";
  std::cout << std::endl;
  return 0;
}
