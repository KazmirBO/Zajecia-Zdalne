#include <iostream>
#include <stack>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::stack<int> st;
  int war;
  for (int i = 0; i < 5; i++) {
    std::cout << "Podaj " << i + 1 << " element: ";
    std::cin >> war;
    st.emplace(war);
  }
  nl;
  std::cout << "Rozmiar stosu wynosi (size): " << st.size() << std::endl;
  st.pop();
  st.pop();
  std::cout << "Rozmiar stosu wynosi (size): " << st.size() << std::endl;
  while (!st.empty()) {
    std::cout << st.top() << " ";
    st.pop();
  }
  nl;
  return 0;
}
