#include<stdio.h>

int subtrai(int num1, int num2, int num3){
	return ((num1-num2)-num3);
}

main(){
	int n1, n2, n3, resultado;
	
	printf("Insira 3 numeros: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	resultado = subtrai(n1, n2, n3);
	printf("resultado: %d", resultado);
}
