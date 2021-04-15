#include <stdlib.h>
#include <stdio.h>
#include <math.h>
struct zespolona{
  float r;
  float u;
};
struct zespolona_wczytaj(){
  struct zespolona_pom;
  printf("Podaj czesc reczywista: ");
  scanf("%f",&pom.r);
  printf("Podaj czesc urojona: ");
  scanf("%f",&pom.u);
  return pom;
};
int main(){
  struct zespolona z1,z2;
  z1.zespolona_wczytaj();
  z2.zespolona_wczytaj();
  printf("\nSuma liczb zespolonych wynosi: ");
  printf("\n\tRzeczywista: %.3f, \n\tUrojona: %.3f\n",(z1.r+z2.r),(z1.u+z2.u));
  printf("\n");
  return 0;
}
