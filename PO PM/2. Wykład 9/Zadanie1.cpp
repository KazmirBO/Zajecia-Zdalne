#include <iostream>
#include <stack>
#define nl std::cout << std::endl
int main(int argc, char const *argv[]) {
  std::stack<int> st;
  st.emplace(1);
  st.emplace(2);
  st.emplace(3);
  st.emplace(4);
  while (!st.empty()) {
    std::cout << st.top() << " ";
    st.pop();
  }
  nl;
  return 0;
}
