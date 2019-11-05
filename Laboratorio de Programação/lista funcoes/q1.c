#include<stdio.h>

int soma(int num1, int num2){
	return num1+num2;
}

main(){
	int n1, n2;
	
	printf("Insira dois numeros: ");
	scanf("%d %d",&n1, &n2);
	
	printf("resultado: %d",soma(n1,n2));
}
