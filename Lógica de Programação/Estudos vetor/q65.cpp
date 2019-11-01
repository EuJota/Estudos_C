#include <stdio.h>

main(){
	int lista[20] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int maior = 0, menor=20;
	int posicaoMaior=0, posicaoMenor=0;
	
	for(int i=0;i<20;i++){
		if(lista[i]<menor){
			menor = lista[i];
			posicaoMenor = i;
		}
		if(lista[i]>maior){
			maior = lista[i];
			posicaoMaior= i;
		}
	}
	
	printf("Menor: %d, Maior: %d, posicaoMaior: %d, posicaoMenor: %d", menor, maior, posicaoMaior, posicaoMenor);
}
