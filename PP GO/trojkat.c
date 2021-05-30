/*
Autor: Kolanowski Sebastian
Tytul: Trojkat - wozry
Data: 18-10-2020
*/
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define PI 3.14
int main(){
	float a,b,c,obwo,obww,ppw,ppo,r,R,S,Stemp,p;
	printf("Podaj a: ");
	scanf("%f",&a);
        printf("Podaj b: ");
        scanf("%f",&b);
        printf("Podaj c: ");
        scanf("%f",&c);
	if(a<=0||b<=0||c<=0){ //sprawdza czy przynajmniej jeden trojkat ma bok mniejszy lub rowny 0
		printf("Trojkat jest nieprawidlowy!\n");
		return 0;
	}
	if((a+b<c)||(a+c<b)||(c+b<a)){ //sprawdza czy z podanych bokow mozna zrobic trojkat
		printf("Trojkat jest nieprawidlowy!\n");
                return 0;
	}
	p=(a+b+c)/2;
	Stemp=p*(p-a)*(p-b)*(p-c);
	S=sqrt(Stemp);
	r=S/p; //Promien wpisanego
	R=(a*b*c)/(4*S); //Promien opisanego
	obwo=2*PI*R; //Obwod opisanego
	obww=2*PI*r; //Obwod wpisanego
	ppw=PI*(r*r); //Pole powierzchni wpisanego
	ppo=PI*(R*R); //Pole powierzchni opisanego
	printf("\nPromien okregu wpisanego wynosi: %f\n",r);
        printf("Obwod okregu wpisanego wynosi: %f\n",obww);
        printf("Pole okregu wpisanego wynosi: %f\n",ppw);
        printf("\nPromien okregu opisanego wynosi: %f\n",R);
        printf("Obwod okregu opisanego wynosi: %f\n",obwo);
        printf("Pole okregu opisanego wynosi: %f\n",ppo);
	return 0;
}
