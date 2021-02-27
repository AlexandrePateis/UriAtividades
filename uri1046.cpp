#include<stdio.h>
#include<stdlib.h>

main()
{
	int a, b, hora=24;
	
	scanf("%d", &a);
	scanf("%d", &b);
	
	if(a>24 || a<0){
		main();
	}else if(b>24 || b<0){
		main();
	}
	if(a>b)
	{
		printf(" JOGO DUROU %d HORA(S)", 24-(a-b));
	}else if(b>a){
		printf(" JOGO DUROU %d HORA(S)", b-a );
	}
	
	 return 0;
}


