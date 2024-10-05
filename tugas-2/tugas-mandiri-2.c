#include <stdio.h>

int main (){
	float d= 15;
	float r= d/2;
	float v = (4/3)*3.14*(r*r*r);
	
	printf("Menghitung volume bangun ruang bola\n");
	printf("Diameter  = %f \n",d);
	printf("Jari jari = 15/2 = %f \n",r);
	printf("Volume    = 4/3*3.14*r^3 =%2.f cm^3",v);
}
