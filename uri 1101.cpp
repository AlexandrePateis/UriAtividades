#include <stdio.h>
#include<stdlib.h>
int main(){
	
	int m, n, soma;
	int i;
	scanf("%d", &n);
	scanf("%d", &m);
	if(n<=0  || m<=0){
		return 0;
	}
	
	else if(m>n){
		
		for(i=n;i<=m;i++){
			printf("%d ", i);
			soma+=i;
				
		}
		printf("sum=%d", soma);
	}else if(n>m){
			for(i=m;i<=n;i++){
			printf("%d ", i);
			soma+=i;
			
		}
		printf("sum=%d", soma);

}
}
