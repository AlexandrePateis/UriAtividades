#include <stdio.h>
#include<stdlib.h>
int main(){
 	
 	float nu, nd, media;
 	
	int cont=0;
 	
 	while(cont<=1){
	 
	do {
	
	scanf("%f", &nu);
 	if(nu<1 || nu>10){
 		printf("nota invalida\n");
 		
	}
	}while (nu<1 || nu>10);
	
	do {

	scanf("%f", &nd);
	if(nd<1 || nd>10){
 		printf("nota invalida\n");
	}
	}while (nd<1 || nd>10);
	media=(nu+nd)/2;
	 printf("media = %.2f", media);
	 printf("\n");
	 printf("novo calculo (1-sim 2-nao)");
	 scanf("%d", &cont);
	}
	 
	 


}
