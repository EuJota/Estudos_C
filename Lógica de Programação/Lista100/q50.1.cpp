#include <stdio.h>

main(){
	int n, combA = 6, combB = 1, soma, cont=0, auxA, auxB;
	
	scanf("%d", &n);
	
	do{
	auxA = n-combB;
	if(soma<=6){
	soma = combB+auxA;
	if(soma==n)
		printf("%d %d\n",auxA,combB);
	}
		
	combA--;
	combB++;	
	cont++;
	}while(cont<=6);// reaver essa condicao
}
