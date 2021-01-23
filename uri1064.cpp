#include<stdio.h>
main()
{
	float a, i, soma=0, media;
	int cont=0, cont1=0;
	
	for(i=0;i<6;i++)
	{
		scanf("%f", &a);
		if(a>0)
		{
			soma=soma+a;
			cont++;
		}
	
		}
	
	media=soma/cont;
	printf("%d valores positivos\n", cont);
	printf("%.2f", media);
	printf("\n");	
}

