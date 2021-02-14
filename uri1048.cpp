#include<stdio.h>
main()
{
	float sal, sala, rj, nv;
	
	scanf("%f", &sal);
	
	if(sal<=400)
	{
		sala=sal*0.15;
		nv=sal+sala;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 15%%", nv, sala);
		
	} else if(sal>400 && sal<=800)
	{
		sala=sal*0.12;
		nv=sal+sala;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 12%%", nv, sala);
	}else if (sal>800 && sal<=1200)
	{
		sala=sal*0.10;
		nv=sal+sala;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 10%%", nv, sala);
	}else if (sal>1200 && sal<=2000)
	{
		sala=sal*0.07;
		nv=sal+sala;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 7%%", nv, sala);
	}else {
		sala=sal*0.04;
		nv=sal+sala;
		printf("Novo salario: %.2f\nReajuste ganho: %.2f\nEm percentual: 4%%", nv, sala);
	}
	printf("\n");
	return 0;
}
