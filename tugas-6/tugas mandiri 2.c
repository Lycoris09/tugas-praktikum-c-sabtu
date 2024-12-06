#include <stdio.h>

int main(){
	int angka[10] ={100,95,90,85,80,75,70,65,60,55};
	int i=0;
	for (i=0; i<10 ; i++){
		printf(" Deretan nilai k-%i: ",i+1);
		printf("%i \n",angka[i]);
	}
}
