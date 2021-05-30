#include <iostream>
#include <fstream>
#include <vector>
int main(){
  std::fstream imiona1, imiona2;
  imiona1.open("imiona-1.txt", std::ios::in);
  imiona2.open("imiona-2.txt", std::ios::out);
  std::vector<std::string>imie;
  std::string tmp;
  while(!imiona1.eof()){
    getline(imiona1,tmp);
    imie.push_back(tmp);
  }
  int ilosc=imie.size();
  for(int i=0;i<ilosc;i++){
    for(int j=0;j<i;j++){
      if(imie[i]<imie[j]){ // Zmienienie < / > = rosnąco / malejąco
        tmp=imie[i];
        imie[i]=imie[j];
        imie[j]=tmp;
      }
    }
  }
  for(int i=0;i<ilosc;i++){
    imiona2<<imie[i]<<std::endl;
  }
  imiona1.close();
  imiona2.close();
  std::cout<<std::endl;
  return 0;
}
