#include <stdio.h>

int main(){
	int angka[10] ={1,2,4,8,16,32,64,128,256,512,1024};
	int i=0;
	for (i=0; i<10 ; i++){
		printf(" Deretan nilai k-%i: ",i+1);
		printf("%i \n",angka[i]);
	}
}
