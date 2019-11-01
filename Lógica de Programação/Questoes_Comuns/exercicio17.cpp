#include <stdio.h>
#include <stdlib.h>

main(){
	int opcao;
	float nota1, nota2, nota3, peso1, peso2, peso3, mediaA, mediaP;
	
	printf("Menu de Opcoes\n");
	printf("1. Media Aritmetica\n");
	printf("2. Media Ponderada\n");
	printf("3. Sair\n");
	scanf("%d", &opcao);
	
	if(opcao == 1){
		printf("\nDigite nota 1 e nota 2\n");
		scanf("%f%f", &nota1, &nota2);
		mediaA = (nota1 + nota2)/2;
		printf("\nMedia Aritmetica=%.1f",mediaA);
	}else if(opcao == 2){
		printf("\nDigite as 3 notas\n");
		scanf("%f%f%f", &nota1, &nota2, &nota3);
		printf("\nAgora digite seus respectivos pesos\n");
		scanf("%f%f%f", &peso1, &peso2, &peso3);
		mediaP = ((nota1 * peso1) + (nota2*peso2)+ (nota3*peso3))/(peso1+peso2+peso3);
		printf("\nMedia Ponderada=%.1f",mediaP);
	}else if(opcao == 3){
		exit(0);
	}
}
