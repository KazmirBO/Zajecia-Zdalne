#include <iostream>
#include <cmath>
class Kolo_centr{
public:
  double rk;
  void promien(){
    std::cout<<"Podaj promien: ";
    std::cin>>rk;
  }
};
class Kolo{
public:
  double r;
  double x,y;
  void promien(){
    std::cout<<"Podaj promien: ";
    std::cin>>r;
    std::cout<<"Podaj x: ";
    std::cin>>x;
    std::cout<<"Podaj y: ";
    std::cin>>y;
  }
  friend class Kolo_centr;
  void Przecinaja(Kolo_centr &k1, Kolo &k2);
};
void Przecinaja(Kolo_centr &k1, Kolo &k2){
  if(abs(k1.rk-k2.r) < sqrt(pow(0-k2.x,2)+pow(0-k2.y,2)) &&
   sqrt(pow(0-k2.x,2)+pow(0-k2.y,2)) < k1.rk+k2.r){
     std::cout<<"Kola sie przecinaja."<<std::endl;
  } else{
    std::cout<<"Kola sie nie przecinaja."<<std::endl;
  }
}
int main(int argc, char const *argv[]) {
  Kolo_centr k1;
  Kolo k2;
  k1.promien();
  k2.promien();
  Przecinaja(k1, k2);
  std::cout<<std::endl;
  return 0;
}
