#include <iostream>
#include <queue>
#define nl std::cout << std::endl
void szukaj(int G[n][n], int V[n], int i) {
  queue<int> kolejka;
  kolejka.push(i);
  int s;
  while (!kolejka.empty()) {
    s = kolejka.front();
    V[s] = 1;
    kolejka.pop();
    for (int k = 0; k <= n; k++) {
      if (G[s][k] != 0) {
        if (V[k] == 0) {
          V[k] = 1;
          kolejka.push(k);
        }
      }
    }
  }
}
int main(int argc, char const *argv[]) {
  const int n = 7;
  int G[n][n];
  int V[n];
  nl;
  return 0;
}
