#include <stdio.h>

main(){
	int lista[10] = {1,2,3,4,12,13,14,15,5,6};
	int n, s=0, encontrado;
	
	scanf("%d", &n);
	
	while(s<10){
		if(n==lista[s]){
			printf("encontrado na posicao: %d",s);
			encontrado= 1;
		}
		s++;
	}
		printf("nao encontrado");
}
