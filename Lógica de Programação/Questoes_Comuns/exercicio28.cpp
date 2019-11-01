#include <stdio.h>

main(){
	int n,d,primo;
	
	d=2;
	primo=1;
	
	scanf("%d",&n);
	
	if(n<=1){
		primo=0;
	}
	
	while(primo==1 && d<=n/2){
		if(n%d==0){
			primo=0;
		}
		d+=1;
	}
	
	if(primo==1){
		printf("primo");
	}else{
		printf("nao primo");
	}
}
