#include <stdio.h>

main(){
	int lista[8] = {8 , 40, 73,35,25, 14, 512, 51255};
	int n;
	int i;
	
	
	scanf("%d", &n);
	
	for(i=0; i<8; i++){
		if(n==lista[i]){
			printf("Numero igual, posicao: %d", i);
			break;
		}
	}
}
