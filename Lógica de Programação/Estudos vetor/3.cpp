#include <stdio.h>

main(){
	int lista[100];
	int count;
	
	for(int i=0;i<100;i++){
		lista[i] = i;
		
		count=i;
	}

	
	for(int k=0;k<=count;k++){
		printf("%d ",lista[k]);
	}
}
