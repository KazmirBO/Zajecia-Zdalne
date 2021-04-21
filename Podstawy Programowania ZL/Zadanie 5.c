#include <stdlib.h>
#include <stdio.h>
int main(){
  float podatek,dochod;
  int dzieci;
  printf("Podaj dochod: ");
  scanf("%f", &dochod);
  if(dochod<20000) podatek=0;
  else if(20000<dochod<50000) podatek=dochod*0.1;
  else if(50000<dochod<100000) podatek=dochod*0.2;
  else if(dochod>100000) podatek=dochod*0.3;
  printf("Ile posiadasz dzieci:");
  scanf("%d",&dzieci);
  switch(dzieci){
    case 2: podatek=podatek-(podatek*0.1); break;
    case 3: podatek=podatek-(podatek*0.2); break;
    default: if(dzieci>3) podatek=podatek-(podatek*0.3); break;
  }
  printf("Podatek wynosi: %0.2f\n", podatek);
  return 0;
}
