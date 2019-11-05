#include<stdio.h>

int ler3numeros(int num1, int num2, int num3){
	int lista[3];
	lista[0] = num1; 
	lista[1] = num2;
	lista[2] = num3;
	
	return lista[0,1,2];
}

main(){
	int n1, n2, n3;
	
	printf("informe 3 numeros: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("%d", ler3numeros(n1,n2,n3));
}
