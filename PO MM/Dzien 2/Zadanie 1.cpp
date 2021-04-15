#include <iostream>
#include <cmath>
using namespace std;
class Kolo{
public:
  double x;
  double y;
  double r;
  double pole();
  double obwod();
  void przedstawsie();
  Kolo();
  Kolo(double a, double b, double c);
};
double Kolo::pole(){
  return 3.14157*pow(r,2);
}
double Kolo::obwod(){
  return 2*3.14157*r;
}
void Kolo::przedstawsie(){
  cout<<"x= "<<x<<endl;
  cout<<"y= "<<y<<endl;
  cout<<"r= "<<r<<endl;
  cout<<"Pole wynosi: "<<pole()<<endl;
  cout<<"Obwod wynosi: "<<obwod()<<endl<<endl;
}
Kolo::Kolo(){
  x=10;
  y=10;
  r=10;
}
Kolo::Kolo(double a, double b, double c){
  x=a;
  y=b;
  r=c;
}
bool czywspolne(double x1, double x2, double y1, double y2, double r1, double r2){
  double odl_srodkow;
  odl_srodkow=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  if(odl_srodkow<=(r1+r2)){
    return true;
  } else {
    return false;
  }
}
int main(){
  Kolo male;
  male.x=15;
  male.y=10;
  male.r=6;
  male.przedstawsie();
  Kolo duze;
  duze.x=1;
  duze.y=1;
  duze.r=10;
  duze.przedstawsie();
  Kolo trzecie;
  trzecie.przedstawsie();
  Kolo czwarte(7,7,7);
  czwarte.przedstawsie();
  if(czywspolne(male.x,trzecie.x,male.y,trzecie.y,male.r,trzecie.r)){
    cout<<"Kola maja czesc wspolna."<<endl;
  }else{
    cout<<"Kola nie maja czesci wspolnej."<<endl;
  }
  cout<<endl;
  return 0;
}
