#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#define nl std::cout<<'\n'
int main(int argc, char const *argv[]) {
  std::cout << "Wprowadz kilka liczb calkowitych, "
  << "CTRL+Z / CTRL+D = koniec: " << '\n';
  std::istream_iterator<int> start(std::cin);
  std::istream_iterator<int> end;
  std::vector<int> liczby(start,end);
  std::ostream_iterator<int> out (std::cout, " ");
  nl;
  int i=1;
  std::transform(liczby.begin(), liczby.end(),
    liczby.begin(), [](int x){return x*x;});
  std::copy(liczby.begin(), liczby.end(), out);
  nl;
  return 0;
}
