#include<stdio.h>
main()
{
	int a, b;
	
	scanf("%d %d", &a, &b);
	
	if(a%b==0 || b%a==0)
	{
		printf("São multiplos.");
	}else {
		printf("Nao sao Multiplos.");
	}
	printf("\n");
	return 0;
}
