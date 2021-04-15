#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <string.h>
void wpisz(int ile,float t[]);
void wypisz(int ile,float t[],char nazwa[]);
int main(){
  srand(time(NULL));
  char napis[20];
  int znak;
  printf("Podaj nazwe pliku:");
  gets(napis);
  strcat(napis,".txt");
  int ilosc=202100;
  float tab[ilosc];
  wpisz(ilosc,tab);
  do{
  printf("Wybierz:\n\t1-Zapisz do pliku,\n\t2-Odczytaj z pliku\n\t3-Koniec\n");
  scanf("%d",&znak);
  switch (znak) {
    case 1:
      wypisz(ilosc,tab,napis);
      printf("\n");
      break;
    case 2:
      break;
    case 3:
      printf("KONIEC!!!\n");
      return 0;
    default:
      printf("Zly znak!!!\n");
      break;
  }
}while(znak!=3);
  printf("\n");
  return 0;
}
void wpisz(int ile,float t[]){
  for(int i=0;i<ile;i++){
    t[i]=1.0*(rand()%10001)/100-40;
  }
}
void wypisz(int ile,float t[],char nazwa[]){
  FILE *plik=NULL;
  plik=fopen(nazwa,"w");
  for(int i=0;i<ile;i++){
    fprintf(plik,"f(%.2f)=%.2f\n", t[i],pow((pow(t[i],2)-3.5),1.0/3.0));
    printf("f(%.2f)=%.2f\n", t[i],pow((pow(t[i],2)-3.5),1.0/3.0));
  }
  fclose(plik);
}
