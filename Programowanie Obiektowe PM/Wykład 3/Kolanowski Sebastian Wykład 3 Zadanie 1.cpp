#include <iostream>
class Liczba_16{
private:
  int liczba_10;
public:
  void setLiczba_10();
  void konwersja();
};
void Liczba_16::setLiczba_10(){
  std::cout<<"Podaj liczbe calkowita: ";
  std::cin>>liczba_10;
}
void Liczba_16::konwersja(){
  std::cout<<"Liczba po konwersji wynosi: "<<std::hex<<liczba_10<<std::endl;
}
int main(int argc, char const *argv[]){
  Liczba_16 Liczba;
  Liczba.setLiczba_10();
  Liczba.konwersja();
  std::cout<<std::endl;
  return 0;
}
