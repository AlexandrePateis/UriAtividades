#include<stdio.h>
#include<stdlib.h>

main()
{
	int a, b, c, d, e, par=0,impar=0,p=0,n=0;
	
	scanf("%d", &a);
	if(a%2==0)
	{
		par++;
	}else{
		impar++;
	}
	if(a>0)
	{
		p++;
	}else if(a<0){
		n++;
	}
	scanf("%d", &b);
	if(b%2==0)
	{
		par++;
	}else{
		impar++;
	}
	if(b>0)
	{
		p++;
	}else if(b<0){
		n++;
	}
	scanf("%d", &c);
	if(c%2==0)
	{
		par++;
	}else{
		impar++;
	}
	if(c>0)
	{
		p++;
	}else if(c<0){
		n++;
	}
	scanf("%d", &d);
	if(d%2==0)
	{
		par++;
	}else{
		impar++;
	}
	if(d>0)
	{
		p++;
	}else if(d<0){
		n++;
	}
	scanf("%d", &e);
	if(e%2==0)
	{
		par++;
	}else{
		impar++;
	}
	if(e>0)
	{
		p++;
	}else if(e<0){
		n++;
	}
	
	printf("%d valo(res) par(es)\n", par);
	printf("%d valo(res) impar(es)\n", impar);
	printf("%d valo(res) positivo(s)\n", p);
	printf("%d valo(res) negativo(s)", n);
	
	
	
	 return 0;
}


