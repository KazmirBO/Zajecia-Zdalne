#include<stdio.h>
#include<math.h>
int main()
{
float a, b, c, delta, x1, x2;
printf("Podaj współczynniki trójmianu\n");
printf("a= ");
scanf("%f", &a);
printf("b = ");
scanf("%f", &b);
printf("c = ");
scanf("%f", &c);
delta = b * b -4.0 * a * c;
if (delta > 0.0)
{
x1 = (-b -sqrt(delta))/(2.0 * a);
x2 = (-b + sqrt(delta))/(2.0 * a);
printf("Pierwiastkami są liczby % .2f, %.2f\n", x1, x2);
}
else if (delta == 0.0)
{
x1 = -b/(2.0 * a);
printf("Pierwiastkiem jest liczba %0.2f\n", x1);
}
else printf("Trójmian nie ma pierwiastków rzeczywistych\n");
return 0;
}
