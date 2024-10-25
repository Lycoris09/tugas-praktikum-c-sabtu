# include <stdio.h>

main()
{
	int nilai;
	printf("masukan nilaii =");
	scanf("%d",&nilai);
	
	if(nilai>50){
		nilai= nilai - 25;
		printf("%d",nilai);
	}
	else{
		nilai= nilai + 10 ;
		printf("%d",nilai);
	}
}
