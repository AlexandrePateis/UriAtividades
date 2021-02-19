#include <stdio.h>

int main () {
	
	int x, y;
	int i;
	scanf("%d\n", &x);
	for(i=1;i<=x;i++){
		scanf("%d", &y);

	if(y%2==0 && y>0){
		printf("EVEN POSITIVE\n");
	}else if(y==0){
		printf("NULL\n");
	}else if(y%2==1 && y>0){
		printf("ODD POSITIVE\n");
	}else if(y%2==0 && y<0){
		printf("EVEN NEGATIVE\n");
	}else{

		printf("ODD NEGATIVE\n");
		}
	}
	
} 


