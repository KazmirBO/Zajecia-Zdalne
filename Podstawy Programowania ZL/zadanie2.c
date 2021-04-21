#include <stdlib.h>
#include <stdio.h>

int main(){
	float bmi,masa,wzrost;
        printf("Podaj mase: ");
	scanf("%f",&masa);
        printf("Podaj wzrost w cm: ");
	scanf("%f",&wzrost);
	wzrost=wzrost/100;
	bmi=masa/(wzrost*wzrost);
        if(bmi<18.5){
                printf("Masz niedowage!\n");
        }

        else if(bmi>=18.5 && bmi<25){
                printf("Masa ciala w normie.\n");
        }

        else if(bmi>=25 && bmi<30){
                printf("Masz nadwage.\n");
        }

        else if(bmi>=30){
                printf("Masz otylosc!\n");
        }

	return 0;
}
