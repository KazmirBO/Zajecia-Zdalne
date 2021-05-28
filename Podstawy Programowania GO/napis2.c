/*
Autor: Kolanowski Sebatian
Projekt: Napis
Data: 08.12.2020
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
// Pozwala na uzycie toupper. Bez lini 18-20 kod nadal bedzie dzialal,
// lecz będzie dzielil znaki na male i duze.
int main(){
  char napis[100];
  fflush(stdin);
  printf("Program zlicza ilosc powtarzajacych sie znakow w tekscie.\n");
  printf("\n\tPodaj tekst: ");
  gets(napis);
  printf("\n\tTwoj tekst to: ");
  puts(napis);
  printf("\n");
  int i,l,temp=0,pow,j,ile,a=strlen(napis),x=strlen(napis)-1;
  for(i=0;i<a;i++) napis[i]=toupper(napis[i]);
  // Zamiania wszystkich znakow w napis na duze litery
  for(i=0;i<a;i++){
    if(napis[i]!=napis[x]) temp=1;
    // Jezeli znak się nie zgadza to nadaje warosc temp=1
    x--;
  }
  if(temp==0) printf("\tTwoj wyraz jest palindromem.\n");
  else printf("\tTwoj wyraz nie jest palindromem.\n");
  for(i=0;i<a;i++){
    ile=0;
    pow=0;
    for(j=0;j<a;j++){
      if(napis[j]==napis[i]) ile++;
      // Powtarzanie się znakow w tekscie
    }
    for(l=0;l<=i;l++){
      if(napis[l]==napis[i]) pow++;
      // Sprawdza czy znak wystapil wczesniej, aby nie wyswietlic go ponownie
    }
    if(pow==1){
      if(napis[i]==' ') printf("\n\tZnak <space> wystepuje %d razy.\n",ile);
      // Testowy dla <space>
      else printf("\n\tZnak %c wystepuje %2d razy.\n",napis[i],ile);
      // Wyswietla znak i ilosc występowania
    }
  }
  printf("\n");
  return 0;
}
