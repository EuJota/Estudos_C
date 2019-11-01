#include<stdio.h>

main(){
	float tempoVermelho, tempoAmarelo, tempoVerde;

	tempoVerde = 3.0*100000;
	tempoAmarelo = 1.0*100000;
	tempoVermelho = 4.0*100000;	
	
		printf("Sinal Verde\n");	
        while(tempoVerde>0){
        	printf("\n%2.0f\n",tempoVerde/1000);
		tempoVerde --;
		if(tempoVerde==0){
			printf("\nSinal amarelo, aguarde\n");
			while(tempoAmarelo>0){
				printf("\n%2.0f\n",tempoAmarelo/1000);
				tempoAmarelo--;
				if(tempoAmarelo==0){
					printf("\nSinal Vermelho, espere\n");
					while(tempoVermelho>0){
						printf("\n%2.0f\n",tempoVermelho/1000);
						tempoVermelho--;
					}
				}
			}
		}
	}
}
