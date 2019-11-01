#include<stdio.h>
#include <string.h>

main(){
	char palavra[]=" ";
	int i=0, contModified=0;
	
	printf("informe uma string: ");
	gets(palavra);
	
	while(palavra[i]!='\0'){
		if(palavra[i]=='a'){
			contModified+=1;
			palavra[i]='b';
		}
		palavra[i++];
	}
	
	printf("\nNova palavra: %s",palavra);
	printf("\nmodificacoes = %d", contModified);
}
