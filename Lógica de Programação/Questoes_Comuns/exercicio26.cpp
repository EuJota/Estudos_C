#include <stdio.h>
#include <math.h>
main(){
	int num, quad, cub, raiz;
	
	do{
		scanf("%d",&num);
		quad=num*num;
		cub=num*num*num;
		raiz=sqrt(num);
		
		printf(" %d, %d, %d\n",quad,cub,raiz);	
	}while(num!=0);
}
