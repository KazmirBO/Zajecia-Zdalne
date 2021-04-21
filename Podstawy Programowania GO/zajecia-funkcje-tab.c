#include <stdio.h>
#include <stdlib.h>
#include <time.h>
//zakres (-20)-10, tab[N], funkcja ktora wypelni tab liczbami calkowitymi
const int N=20;
void losuj(int n, int t[]);
void drukuj(int n, int t[]);
void sort(int n, int t[]);
float srednia(int n, int k[]);
int main(){
  int n=10,a[N];
  losuj(n,a);
  drukuj(n,a);
  sort(n,a);
  printf("\n");
  drukuj(n,a);
  printf("\n");
  printf("\nSrednia = %.2f\n",srednia(n,a));
  printf("\n");
  return 0;
}
void losuj(int n, int t[]){
  srand(time(NULL));
  for(int i=0;i<n;i++)
  t[i]=rand()%31-20;
}
void drukuj(int n, int t[]){
  for(int i=0;i<n;i++){
    printf("\nTab[%2d] = %3d",i+1,t[i]);
  }
}
void sort(int n, int t[]){
  int pow;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(t[j]>t[i]){
        pow=t[i];
        t[i]=t[j];
        t[j]=pow;
      }
    }
  }
}
float srednia(int n, int k[]){
  float suma=0.0;
  for(int i=0;i<n;i++)
    suma+=k[i];
  return suma/(1.0*n);
}
