#include<stdio.h>
#include<stdlib.h>

int main()
{
	int num, cont, impar=0, par=0, positivo=0, negativo=0;
	
	while(cont!=5){
		scanf("%d", &num);
		if(num%2==0)
		{
			par++;
		}else{
			impar++;
		};
		if(num>0)
		{
			positivo++;
		}else if(num<0){
			negativo++;
		}
		cont++;
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	
	return 0;
}
