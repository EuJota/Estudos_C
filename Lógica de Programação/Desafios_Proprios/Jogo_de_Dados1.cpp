#include <stdlib.h>
#include <stdio.h>
#include <time.h>

main(){
	int apostaJogador= 1;
	int numeroSorteado = 0;
	char start;
	
	printf("Bem vindo jogador!\n");
	printf("Para sair do jogo a qualquer instante digite N, para comecar digite S\n");
	scanf("%c",&start);
	
	if(start == 'N'){
		exit(0);
	}
	
	while(apostaJogador>0){
		printf("\nFaca sua aposta\n");
		scanf("\n%d",&apostaJogador);
		
		if(apostaJogador == 0 || apostaJogador > 6){
			printf("Numero nao valido");
			exit(0);
		}else{
		
		srand(time(NULL));
		
		for(int i=0; i<1;i++){
			numeroSorteado = rand() % 6;
			
			if(apostaJogador == numeroSorteado){
				printf("\nParabens, voce acertou o numero=%d",numeroSorteado);
			}else{
				printf("\nNao foi dessa vez jogador, o numero=%d\n",numeroSorteado);
			}
		}
	}
			
		printf("Deseja continuar? S|N\n");
		scanf("\n%c",&start);
		
		if(start == 'N'){
			exit(0);
		}
	}
}
