#include <iostream>
#define nl std::cout << std::endl
void zwiedzaj(int G[n][n], int V[n], int i) {
  V[i] = 1;
  std::cout << "Badam wierzchołek " << i << std::endl;
  for (int k = 0; k < n; k++) {
    if (G[i][k] != 0)
      zwiedzaj(G, V, k);
  }
}
void szukaj(int G[n][n], int V[n]) {
  for (int i = 0; i < n; i++)
    V[i] = 0;
  for (int i = 0; i < n; i++)
    if (V[i] == 0)
      zwiedzaj(G, V, i);
}
int main(int argc, char const *argv[]) {
  const int n = 7;
  int G[n][n];
  int V[n];

  nl;
  return 0;
}
