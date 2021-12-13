#include<iostream>
#include<fstream>
int main(int argc, char const *argv[]) {
  std::string path("./plik.txt");
  std::string roz = "";
  int ilosc=path.size();
  while(path[ilosc]!='.'){
    roz+=path[ilosc];
    ilosc--;
  }
  std::cout<<"Mozliwe rozszezenie to: "<<roz<<std::endl;
  return 0;
}
