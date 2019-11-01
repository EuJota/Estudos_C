#include <stdio.h>

main(){
	int n=0,cont=0, media=0;
	
	do{
		scanf("%d",&n);
		cont++;
		media+=n;
	}while(cont<5);
	
	printf("media %d",media/5);
}
