#include<stdio.h>
main()
{
	double a, b, c, d, t, media, n;
	
	scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
	
	media=((a*2)+(b*3)+(c*4)+(d*1))/10;
	
	printf("Media: %.1f\n", media);
	
	if(media >= 7){
		
		printf("Aluno aprovado.");
	
	}else if(media>=5){
		
		printf("Aluno em exame.\n");
		
		scanf("%lf", &t);
	
		n=(t+media)/2;
	
		printf("Nota do exame. %.1f\n", t);
		
	}if(n>5)
	{
		
		printf("Aluno aprovado.\n");
		
		printf("Nota final: %.1lf", n);

	}else {
		
		printf("Aluno reprovado.");

	}
	
}
