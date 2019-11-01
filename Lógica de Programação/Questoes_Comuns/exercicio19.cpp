#include <stdio.h>
#include <stdlib.h>

main(){
	int idade, nRepeticoes, mediaIdades, nVoltas;
	
	nVoltas = 0;
	nRepeticoes = 1;
	mediaIdades = 0;
	
	while(nRepeticoes>0){
		printf("Digite sua idade, se quiser sair do programa digite idade = 0\n");
		scanf("%d",&idade);
		nVoltas++;
		mediaIdades = mediaIdades+idade;
		if(idade==0){
			if(nVoltas==1){
				printf("Media das idades =%d",mediaIdades);
			}else if(nVoltas>1){
			printf("Media das idades =%d",mediaIdades/(nVoltas-1));	
			}
			exit(0);
		}
		nRepeticoes++;
	}
}
