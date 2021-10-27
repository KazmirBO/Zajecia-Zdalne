#include <iostream>
#include <deque>
int main(int argc, char const *argv[]) {
  std::deque<std::string> miasta;
  std::string tmp;
  do {
    std::cin>>tmp;
    //if(tmp=="q"){break;} // Wersja z Break
    miasta.push_back(tmp);
  }while(tmp!="q");
  int size=miasta.size()-1;
  //int size=miasta.size(); // Dla wersji Break
  for(int i=0;i<size;i++) std::cout<<miasta[i]<<std::endl;
  return 0;
}
