#ifndef SIMPLEVECTOR_H
#define SIMPLEVECTOR_H
#include <cstdlib>
#include <iostream>
#include <new>
template <class T> class SimpleVector {
private:
  T *aptr;
  int arraySize;
  void memError();
  void subError();

public:
  SimpleVector() {
    aptr = 0;
    arraySize = 0;
  }
  SimpleVector(int);
  SimpleVector(const SimpleVector &);
  ~SimpleVector();
  int size() const { return arraySize; }
  T getElementAt(int position);
  T &operator[](const int &);
};
template <class T> SimpleVector<T>::SimpleVector(int s) {
  arraySize = s;
  try {
    aptr = new T[s];
  } catch (std::bad_alloc) {
    memError();
  }
  for (int count = 0; count < arraySize; count++) {
    *(aptr + count) = 0;
  }
}
template <class T> SimpleVector<T>::SimpleVector(const SimpleVector &obj) {
  arraySize = obj.arraySize;
  aptr = new T[arraySize];
  if (aptr == 0) {
    memError();
  }
  for (int count = 0; count < arraySize; count++) {
    *(aptr + count) = *(obj.aptr) + count;
  }
}
template <class T> SimpleVector<T>::~SimpleVector() {
  if (arraySize > 0) {
    delete[] aptr;
  }
}
template <class T> void SimpleVector<T>::memError() {
  std::cout << "Blad, nie mozna przydzielic pamieci." << std::endl;
  exit(EXIT_FAILURE);
}
template <class T> void SimpleVector<T>::subError() {
  std::cout << "Blad, indeks poza zakresem tablicy." << std::endl;
  exit(EXIT_FAILURE);
}
template <class T> T SimpleVector<T>::getElementAt(int sub) {
  if (sub < 0 || sub >= arraySize)
    subError();
  return aptr[sub];
}
template <class T> T &SimpleVector<T>::operator[](const int &sub) {
  if (sub < 0 || sub >= arraySize)
    subError();
  return aptr[sub];
}
#endif
