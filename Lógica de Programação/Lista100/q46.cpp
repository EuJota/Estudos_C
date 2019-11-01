#include <stdio.h>

main(){
	int a, b, cont=0, sub, rec;
	
	scanf("%d%d", &a ,&b);
	rec=a;
	do{
		rec-=b;
		cont++;
	}while(rec>=b);
	printf("\nQuociente -->%d", cont);
}
