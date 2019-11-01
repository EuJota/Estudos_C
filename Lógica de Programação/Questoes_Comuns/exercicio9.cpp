#include<stdio.h>
#include<stdlib.h>

main(){
	char letra;
	char frase[10];
	
	printf("Insira um caracter: ");
	letra = getchar();
	printf("voce digitou: '%c'\n",letra);
	printf("\nDigite uma frase\n");
	scanf("%s",&frase);
	printf("\n%s\n",frase);
	system("PAUSE");
}
