#include <stdio.h>

int main(){
	int angka[10] ={10,20,30,40,50,60,70,80,90,100};
	int i=0;
	for (i=0; i<10 ; i++){
		printf(" Deretan nilai k-%i: ",i+1);
		printf("%i \n",angka[i]);
	}
}
