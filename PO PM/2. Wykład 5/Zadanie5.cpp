#include<iostream>
#include<vector>
#include<iterator>
#include<algorithm>
#define nl std::cout<<'\n'
int main(int argc, char const *argv[]) {
  std::vector<int> liczby = {14, 22, 12, 11, 9, 24, 77, 99};
  std::ostream_iterator<int> out (std::cout, " ");
  nl;
  int m = std::count_if(liczby.begin(), liczby.end(),
    [](int x){
      if(x>13) return 1;
      else return 0;
    });
  int n = std::count_if(liczby.begin(), liczby.end(),
    [](int x){
      if(x%2==1) return 1;
      else return 0;
    });
  std::cout << "Liczb wiekszych jest: " << n;
  nl;
  std::cout << "Liczb nieparzystych jest: " << n;
  nl;
  return 0;
}
