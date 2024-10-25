#include <stdio.h>

int main (){
	int angka ;
	
	printf("inputkan angka = ");
	scanf("%d",&angka);
	
	if (angka %2==0 ){
		printf("Bilangan Genap");
	}
	else{
		printf("Bilangan Ganjil");
	}
}
