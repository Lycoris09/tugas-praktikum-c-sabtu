# include <stdio.h>

main()
{
	int nilai;
	printf("inputkan nilai nilaii =");
	scanf("%d",&nilai);
	
	if(nilai > 50){
		nilai= nilai - 25;
		printf("hasil inputkan nilai di - 25 = %d",nilai);
	}
	else if(nilai < 50 ){
		nilai= nilai + 10 ;
		printf("hasil inputkan nilai di + 10 = %d",nilai);
	}
}
