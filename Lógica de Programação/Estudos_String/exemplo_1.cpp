#include <stdio.h>
#include <string.h>

// exemplo 1, estudo de strings

main(){
	char palavra[30], palavra2[30], teste[30]; 
	int tam, comp; 
	
	printf("\n Informe uma string: "); 
	gets(palavra); 
	
	printf("A palavra digitada eh%s\n ", palavra); 
	
	printf("\n Informe uma segunda string: "); 
	gets(palavra2); 
	
	printf("A palavra digitada eh%s\n ", palavra2); 
	
	strcpy(teste,"aula teste"); 
	
	printf("A palavra copiada eh%s\n ", teste); 
	
	strcat(teste, " 1"); 
	
	printf("A palavra concatenada eh %s\n ", teste); 
	
	tam=strlen(palavra); 
	
	printf("\nO tamanho da primeira string eh %d ", tam); 
	
	comp=strcmp(palavra, palavra2); 
	
	if (comp==0) 
		printf("\nSaoiguais: %d ", comp); 
	else 
		printf("\nSaodiferentes: %d ", comp); 
		
	printf("\nMaiusculo: %s", strupr(palavra));   
	
	printf("\nMinusculo: %s\n", strlwr(palavra));         
}
