#include <iostream>
#include <locale>
int main(int argc, char const *argv[]) {
  setlocale( LC_ALL, "pl_PL.UTF-8" );
  std::string Polskie="łżźóęą";
  int Znakint=(int)Polskie[1];
  char32_t Znak=Polskie[1];
  std::cout<<(char)Znak<<std::endl<<(char)Znakint<<std::endl;
  std::cout<<(int)Znak<<std::endl<<(char)Znakint<<std::endl;
  for(auto e:Polskie) std::cout<<(char)(char32_t)e;
  std::cout<<std::endl;
  for(auto e:Polskie) std::cout<<(int)e;
  std::cout<<std::endl<<Polskie<<std::endl;
  return 0;
}
