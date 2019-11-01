#include <stdio.h>

main(){
	float valorF, valorC;
	
	printf("Digite o valor da temperatura em F\n");
	scanf("%f",&valorF);
	
	valorC = ((valorF-32)*5)/9;
	
	printf("Temperatura em C=%.2f",valorC);
}
