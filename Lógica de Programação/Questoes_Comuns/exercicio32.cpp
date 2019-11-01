#include <stdio.h>

main(){
	int idade, totalIdade=0, mediaIdade, cont=0;
	
	do{
		printf("\nDigite a idade\n");
		scanf(" %d",&idade);
		totalIdade+=idade;
		cont++;
	}while(idade!=0);
	
	mediaIdade=totalIdade/(cont-1);
	
	printf("Soma total das idades: %d\n", totalIdade);
	printf("Media das idades: %d", mediaIdade);
}
