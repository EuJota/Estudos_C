#include <stdio.h>

main(){
	int soma =0;
	
	for(int i=1;i<101;i++){
		printf("%d\n",i);
		soma+=i;
	}
	
	printf("soma %d",soma);
}
