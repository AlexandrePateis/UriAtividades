#include<stdio.h>
main()
{
	int M=1, N=1, soma;
	while(M>0 && N>0){
	
	scanf("%d", &M);
	scanf("%d", &N);
	
	if(M<=0 || N<=0)
	{
		printf("\n");
	}else if(M>N)
	{
		printf("%d %d %d %d Sum=%d\n", N, N+1, N+2, M, N+N+1+N+2+M);
	}else if(N>M)
	{
		printf("%d %d %d %d Sum=%d\n", M, M+1, M+2, N, M+M+1+M+2+N);
	}
	}
	printf("\n");
}
