#include <stdio.h>

int main (){
	float palas,tinggi,luas,keliling;
	
	printf("inputkan panjang alas segitiga = cm\n");
	scanf("%f",&palas);
	printf("inputkan tinggi segitiga  = cm \n");
	scanf("%f",&tinggi);
	
	luas = palas * tinggi * 0.5 ;
	keliling = palas * 3 ;
	
	printf("hasil luas                =%2.f cm^2 \n",luas);
	printf("hasil keliling            =%2.f cm^2 \n",keliling);
	
}
