#include <stdio.h>

main(){
	char palavra[]="a";
	int i=0;
	int cont =0;
	int bloco, auxBloco, conta, nletra, nBloco;
	
	nBloco = 0;
	auxBloco=0;
	
	gets(palavra);
	
	scanf("%d",&bloco);
	
	while(palavra[i] != '\0'){ 
	nletra = palavra[i]-'a';
		if(auxBloco == 0){
			conta+=auxBloco+nletra+nBloco;
			auxBloco++;
		}else{
			conta+=auxBloco+nletra+nBloco;
			auxBloco++;
				if(auxBloco==bloco){
					nBloco+=1;
				}
				if(auxBloco==bloco){
					auxBloco = 0;
				}
		}
		palavra[i++]; 
	}
	printf("%d ", conta%100);
}
