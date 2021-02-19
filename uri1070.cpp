#include<stdio.h>

int main(){
   int a, i;
	scanf("%d", &a);
	if(a%2==0)
		a=a+1;
	else
		a=a;
		printf("%d\n", a);
	for(i=1;i<=5;i++){
		printf("%d\n", a+=2);
	}
}
