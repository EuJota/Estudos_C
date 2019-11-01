#include <stdio.h>

main(){
	int numero, resto;
	
	printf("Digite um numero inteiro\n");
	scanf("%d",&numero);
	resto = numero%2;
	if(resto==0){
		printf("Numero par");
	}else{
		printf("Numero impar");
	}
}
