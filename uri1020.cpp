#include<stdio.h>
main()
{
	int dia, ano, mes, d;
	
	scanf("%d", &dia);
	
	
	
	printf("%d ano(s)\n", dia/365);
	
	printf("%d mes(s)\n", (dia%365)/30);
	
	printf("%d dia(s)\n", (dia%365)%30);
	
	printf("\n");
}
