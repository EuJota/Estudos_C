#include <stdio.h>
#include <string.h>

main(){
	char meuNome[50];
	int cont=0, i=0;
	
	printf("Digite seu nome: ");
	gets(meuNome);
	
	while(meuNome[i]!='\0'){
		if(meuNome[i]==' ')
			cont--;
		cont++;
		meuNome[i++];
	}
	
	printf("Nome %s",meuNome);
	printf("\nTamanho do nome %d",cont);

}
