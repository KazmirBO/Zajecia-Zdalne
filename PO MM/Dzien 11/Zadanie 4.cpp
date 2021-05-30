#include <iostream>
#include <fstream>
#define nl std::cout<<std::endl
int main(int argc, char const *argv[]) {
  std::string numer;
  //getline(std::cin, numer);
  int r,k=0;
  std::fstream plik;
  plik.open("numery.txt", std::ios::in);
  while(!plik.eof()){
    getline(plik, numer);
    r=0;
    r=numer.size();
    if(r>8){
      if(r==9) k=0;
      if(r>9){
        k=0;
        if(numer[0]=='0'){
          while(numer[0]=='0'){
            for(int i=0;i<r;i++) numer[i]=numer[i+1];
          }
        }
        for(int i=0;i<r;i++) if(numer[i]==' ') for(int j=i;j<r;j++) numer[j]=numer[j+1];
        if(numer[0]=='+' && numer[1]=='4' && numer[2]=='8'
        && r>=12){
          k=1;
          while(numer[3]=='0'){
            for(int i=3;i<r;i++) numer[i]=numer[i+1];
          }
        }
        if(numer[0]=='4' && numer[1]=='8'
        && r>=11){
          k=2;
          while(numer[2]=='0'){
            for(int i=2;i<r;i++) numer[i]=numer[i+1];
          }
        }
      }
      if(k==0){
        std::cout<<"+48 ";
        for(int i=0;i<9;i++){
          if(i%3==0 && i!=0) std::cout<<"-";
          std::cout<<numer[i];
        }
        nl;
      }
      if(k==1){
        for(int i=0;i<12;i++){
          if(i==3) std::cout<<" ";
          if(i%3==0 && i!=0 && i!=3) std::cout<<"-";
          std::cout<<numer[i];
        }
        nl;
      }
      if(k==2){
        std::cout<<"+";
        for(int i=0;i<11;i++){
          if(i==2) std::cout<<" ";
          if(i%3==2 && i!=2) std::cout<<"-";
          std::cout<<numer[i];
        }
        nl;
      }
    }
  }
  nl;
  return 0;
}
