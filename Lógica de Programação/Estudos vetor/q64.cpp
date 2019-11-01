#include<stdio.h>
// menor e maior valor
main(){
	int lista[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20}; // voce pode alterar os valores aqui para testar qual o maior e o menor valor
	int menor=20, maior=1; //Só fiz dessa forma porque tem como saber qual o maior e o menor falor e atribuir na variável
	
	for(int i=0;i<20;i++){
		if(lista[i]<menor)
			menor=lista[i];
		if(lista[i]>maior)
			maior=lista[i];
	}
	
	printf("maior: %d menor: %d", maior, menor);
}
