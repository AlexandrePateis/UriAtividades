#include<stdio.h>
main()
{
	int a, b, c, d, e, f, g, h, i , j, k, l, m, n;
	
	printf("1-Vertebrado\n2-Inertebrado\n");
	scanf("%d", &a);
	if(a==1)
	{
		printf("1-Ave\n2-Mamifero\n");
		scanf("%d", &b);
		if(b==1)
		{
			printf("1-Carnivoro\n2-Onivoro\n");
			scanf("%d", &c);
			if(c==1)
			{
				printf("Aguia\n");
				
			}else 
			{
				printf("Pomba\n");
			}
		
		}if(b==2)
		{
			printf("1-Onivero\n2-Herbivero\n");
			scanf("%d", &d);
			if(d==1)
			{
				printf("Homem\n");
			}else
			{
				printf("Vaca\n");
			}
		}
	}
	if(a==2)
	{
		printf("1-Inseto\n2-Anelideo\n");
		scanf("%d", &b);
		if(b==1)
		{
			printf("1-Hematofago\n2-Herbivero\n");
			scanf("%d", &c);
			if(c==1)
			{
				printf("Pulga\n");
				
			}else 
			{
				printf("Lagarta\n");
			}
		
		}if(b==2)
		{
			printf("1-Hematofago\n2-Onivero\n");
			scanf("%d", &d);
			if(d==1)
			{
				printf("Sanguessuga\n");
			}else
			{
				printf("Minhoca\n");
			}
		}
	}
}
