#include <stdio.h>

main(){
	int lista [8] = {10,101,141,5126,61,6171,12,612};
	int n;
	int i=0;
	
	scanf("%d", &n);
	
	for(i=0;i<8;i++){
		if(n==lista[i]){
			printf("numero encontrado na posição %d", i);
			break;
		}else{
			printf("nao existe");
		}
	}
	
}
