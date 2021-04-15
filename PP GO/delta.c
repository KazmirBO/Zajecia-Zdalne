#include<stdio.h>
#include<math.h>

int main (void) {
   int a,b,c;
   printf ("Podaj a: ");
   scanf("%d",&a);
   printf("Liczba a wynosi: %d\n",a);
   printf ("Podaj b: ");
   scanf("%d",&b);
   printf("Liczba b wynosi: %d\n",b);
   printf ("Podaj c: ");
   scanf("%d",&c);
   printf("Liczba c wynosi: %d\n",c);
   int delta;
   delta=(b*b)-4*a*c;
   printf ("Delta wynosi: %d\n",delta);
   if (delta<0) {printf ("Delta jest mniejsza od 0!\n"); return 0;}
   float pierw;
   pierw=sqrt(delta);
   float x1,x2;
   if (delta==0){
      x1=-b/(a+a);
      printf ("Miejsce zerowe wynosi x=%f\n",x1);
      return 0;
   }
   else{
      printf ("Pierwiastek z delty wynosi: %f\n",pierw);
      x1=(-b-pierw)/(a+a);
      x2=(-b+pierw)/(a+a);
      printf ("Miejsca zerowe wynosza:\n");
      printf ("X1 wynosi: %f\n",x1);
      printf ("X2 wynosi: %f\n",x2);
      return 0;
   }
   return 0;
}
