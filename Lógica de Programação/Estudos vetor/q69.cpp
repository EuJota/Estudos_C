#include <stdio.h>

main(){
	int lista[15];
	int n;
	int cont=0;
	
	for(int i=0;i<15;i++){
		scanf("%d", &lista[i]);
	}
	
	printf("Insira um valor ");
	scanf("%d", &n);
	
	for(int k=0;k<15;k++){
		if(n==lista[k])
			cont++;
	}
	
	printf("Numero de vezes que aparece o numero \"%d\" na lista: %d",n, cont);
	
}
