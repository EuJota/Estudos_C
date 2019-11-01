#include <stdio.h>

main(){
	int n, cont =0, aux;
	
	scanf("%d", &n);
	aux=n; 
	
	for (int i=1;i<=aux;i=i+2){ // for recebe i<=aux pois eh o numero que vai ser verificado apos cada subtracao e 
								//for inicia o i pelo numero 1 e recebe o i=i+2 pois pede a subtracai de todos os numeros impares
			aux-=i;
			cont++;
	}
	printf("%d",cont);
	
	
}
