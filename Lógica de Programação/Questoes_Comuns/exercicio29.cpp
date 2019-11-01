#include <stdio.h>

main(){
	int n, p,d, primo;
	
	primo=1;
	n=2;
	d=2;
	
	for(int i=1;i<20;i++){
		while(primo==1 && d<=n/2){
			if(n%d==0){
				primo=0;
			}
		d+=1;
		n+=1;
		}
			if(primo==1){
				printf("%d\n",n);
			}
	}
}
