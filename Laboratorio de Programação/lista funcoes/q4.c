#include<stdio.h>

int ler3numeros(){
	int lista[3];
	
	for(int i=0;i<3;i++){
		printf("Informe um valor: ");
		scanf("%d",&lista[i]);
	}
	return lista;
}

main(){
	int lista;

	lista = ler3numeros();

	printf("%d",lista);
	
}
