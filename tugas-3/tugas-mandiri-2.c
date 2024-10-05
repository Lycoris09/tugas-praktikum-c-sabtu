#include <stdio.h>

int main (){
	float c,f,r;
	
	printf("inputkan suhu Celcius   = ");
	scanf("%f",&c);
	
	f = (c * 1.8) + 32;
	r = 0.8 * c ;
	
	printf("Celcius ke Farenheit         = %.2f \n",f);
	printf("Celcius ke Reamur            = %.2f \n",r);
	
}
