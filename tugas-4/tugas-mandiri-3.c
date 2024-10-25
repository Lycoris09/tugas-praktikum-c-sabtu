#include <stdio.h>

int main (){
	int nilai;
	
	printf("inputkan nilai = ");
	scanf("%d",&nilai);
	
	if (nilai > 50){
		nilai = nilai - 25 ;
		printf("hasil nilai yang di inputkan di - 25 = %d ",nilai);
	}
	else {
		nilai = nilai + 10 ;
		printf("hasil nilai yang di inputkan di + 10 = %d ",nilai);
	}
}
