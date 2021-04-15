#include <stdio.h>
#include <conio.h> //DOS, kbhit()
int main()
{ int n;
float x,y;
int i = 0;
float s = 0.0;
printf("\nPodaj wymiar : ");
scanf("%d",&n);
while (i++ < n)
{printf("skladowa %d : ",i);
scanf("%f%f",&x,&y);
s += x*y;
}
printf("iloczyn skalarny = %.2f",s);
while (!kbhit()); //przytrzymanie ekranu
return 0;
}
