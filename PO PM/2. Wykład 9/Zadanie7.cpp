#include <ctime>
#include <iostream>
#include <queue>
#include <vector>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  srand(time(NULL));
  std::priority_queue<int, std::vector<int>, std::greater<int>> pq;
  for (int i = 0; i < 20; i++) {
    pq.push(rand() % 25);
  }
  while (!pq.empty()) {
    std::cout << pq.top() << std::endl;
    pq.pop();
  }
  nl;
  return 0;
}
