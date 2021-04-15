#include <iostream>
#include <iomanip>
#include "pojazd.h"
#include "samochod.h"
#include "ciezarowka.h"
#include "suv.h"
int main(int argc, char const *argv[]) {
  Samochod samochod("BMW", 2017, 50000, 60000, 4);
  Ciezarowka ciezarowka("Toyota", 2016, 40000, 48000, "4WD");
  Suv suv("Volvo", 2015, 30000, 72000, 5);
  std::cout<<std::fixed<<std::showpoint<<std::setprecision(2);
  std::cout<<"Sedan w magazynie: \n\tMarka: "<<samochod.getMarka()
  <<",\n\tRok produkcji: "<<samochod.getRok()
  <<",\n\tPrzebieg: "<<samochod.getPrzebieg()
  <<",\n\tCena:"<<samochod.getCena()
  <<",\n\tLiczba drzwi: "<<samochod.getDrzwi()<<std::endl;
  std::cout<<std::endl;
  std::cout<<"Ciezarowka w magazynie: \n\tMarka: "<<ciezarowka.getMarka()
  <<",\n\tRok produkcji: "<<ciezarowka.getRok()
  <<",\n\tPrzebieg: "<<ciezarowka.getPrzebieg()
  <<",\n\tCena:"<<ciezarowka.getCena()
  <<",\n\tLiczba drzwi: "<<ciezarowka.getNaped()<<std::endl;
  std::cout<<std::endl;
  std::cout<<"Suv w magazynie: \n\tMarka: "<<suv.getMarka()
  <<",\n\tRok produkcji: "<<suv.getRok()
  <<",\n\tPrzebieg: "<<suv.getPrzebieg()
  <<",\n\tCena:"<<suv.getCena()
  <<",\n\tLiczba drzwi: "<<suv.getMiejsca()<<std::endl;
  std::cout<<std::endl;
  return 0;
}
