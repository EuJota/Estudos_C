#include <stdio.h>

main(){
	int lista1[10] = {1,2,3,4,5,6,7,8,9,10};
	int lista2[10] = {1,2,3,4,5,6,7,8,9,10};;
	int lista3[2];
	int maior1=0, maior2=0;
	
	for(int i=0;i<10;i++){
		if(lista1[i]>maior1)
			maior1 = lista1[i];
	}
	
	for(int j=0;j<10;j++){
		if(lista2[j]>maior2)
			maior2 = lista2[j];
	}
	
	lista3[0] = maior1;
	lista3[1] = maior2;
	
	printf("Maior de 1: %d, Maior de 2: %d", lista3[0], lista3[1]);
}
