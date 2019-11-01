#include<stdio.h>

main(){
	int primo, d, n, rest;
	
	primo = 1;
	d = 2;
	
	scanf("%d",&n);
	
	while(primo==1 && d<=n/2){
		if(n%d==0)
			primo=0;
		else
			d++;
	}
	
	if(primo==1){
		rest = n+2;
			while(primo==1 && d<=rest/2){
				if(rest%d==0)
					primo = 0;
				else
					d++;
			}
		if(primo==1){
			printf("primo de chen");
		}
	}else{
		printf("Nem primo nem de chen aksjdas");
	}
}
