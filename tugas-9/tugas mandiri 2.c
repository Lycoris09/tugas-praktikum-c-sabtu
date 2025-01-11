#include <stdio.h>

int main(){
	char a[10]={'S','T','T','M','A','N','D','A','L','A'};
	int i , n;
	int b=0;
	
	printf("Masukan nilai array:");
	scanf("%s",&n);
	i = 0;
	while(i<=sizeof(a)/sizeof(a[0])) {
		if(a[i]==n) {
			b++;	
	}
	i++;
	}	
	printf("\n");
		if (b>0) {
			printf("Jumlah array : %d\n",b);
			printf("ADA");
		}		
		else {
		printf("TIDAK ADA");
		}
return 0;
	
}
