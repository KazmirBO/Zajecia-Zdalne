#include <iostream>
class Punkt{
public:
  int x=5,y=4;
  void init();
  void przesun(int px, int py);
};
void Punkt::init(){
  std::cout<<"x= "<<x<<std::endl;
  std::cout<<"y= "<<y<<std::endl;
}
void Punkt::przesun(int px, int py){
  x+=px;
  y+=py;
}
int main(int argc, char const *argv[]) {
  Punkt wsp;
  Punkt *wsk=&wsp;
  wsp.init();
  wsp.przesun(2, 2);
  wsk->init();
  std::cout<<std::endl;
  return 0;
}
