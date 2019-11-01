#include <stdio.h>

main(){
	int listaPar[18];
	int lista2[9];
	int soma[18];
	
	for(int x=0;x<21;x++){
		for(int i=2;i<21;i=i+2){
		listaPar[i] =i;
		//printf("%d\n",listaPar[i]);
	}// botar um continue pra pular enquanto nao chegar no index ainda etc preguica agora
	for(int k=10;k<20;k++){
		lista2[k]=k;
		printf("k-> %d n->%d\n",k,lista2[k]);
	}	
	//soma[x] = listaPar[x]+lista2[x];
	//printf("soma--> %d\n",soma[x]);
	}			
}
