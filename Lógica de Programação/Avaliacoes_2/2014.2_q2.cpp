#include <stdio.h>

main(){
	int n, cont, d, primo, primos=0;
	
	primo=1;
	d=2;
	cont=3;
	
	scanf("%d", &n);
	for(int i=3;i<=n;i++){
		while(primo==1 && d<=i/2){
			if(i%d==0){
				primo=0;
			}		
			d++;
		}	
		if(primo==0)
			printf(" nao primo: %d", i);
	}
	
	
}
