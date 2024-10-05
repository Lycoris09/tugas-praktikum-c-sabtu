#include <stdio.h>

int main (){
	float sa,st,ms,h;
	
	printf("inputkan sisi alas     = ");
	scanf("%f",&sa);
	printf("inputkan sisi tinggi   = ");
	scanf("%f",&st);
	
	ms = sqrt(sa*sa + st*st);
	
	printf("sisi segitiga          = %.2f \n",ms);
	
}
