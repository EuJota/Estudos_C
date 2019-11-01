#include <stdio.h>

main(){
	int lista1 [10]  = {1,2,3,4,5,6,7,8,9,10};
	int lista2 [10] =  {1,2,3,4,5,6,7,8,9,10};
	int listaResultado [10];
	
	for(int i =0;i<10;i++){
		listaResultado[i] = lista1[i]+lista2[i];
		printf("lista1->%d + lista2->%d resultado->%d\n",lista1[i],lista2[i], listaResultado[i]);
		//Entendi que a questao pedia para somar as posições dos vetores
	}
	
	
}
