#include <stdio.h>

int main () {
	int alas = 8 ;
	int tinggi = 5 ;
	float luas = 0.5*alas*tinggi;
	
	printf("Menghitung luas segitiga\n");
	printf("Rumus luas = 0.5 x alas x tinggi \n");
	printf("0.5  x Alas x tinggi = 0.5 x %i x %i \n",alas,tinggi);
	printf("Luas Segitiga = %2.f m^2 ",luas);
}
