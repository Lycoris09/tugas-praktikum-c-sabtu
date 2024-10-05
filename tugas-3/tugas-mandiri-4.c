#include <stdio.h>

int main (){
	int bilangan;
	
	printf("inputkan bilangan     = ");
	scanf("%d",&bilangan);
	
	if(bilangan % 2==0){
		printf("Genap");
	}
	else{
		printf("Ganjil");
	}
	
}
