#include <stdio.h>

main(){
	int a,b, rec,cont=0;
	
	scanf("%d%d", &a,&b);
	
	rec=a;
	do{
		rec-=b;
		cont++;
	}while(rec>=b);
	
	printf("Resto-->%d",rec);
}
