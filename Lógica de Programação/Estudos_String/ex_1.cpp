#include <stdio.h>
#include <string.h>

main(){
	char str1[]="", str2[]="";
	
	printf("Escreva a primeira palavra: ");
	gets(str1);
	
	printf("Palavra 1: %s",str1);
	printf("\nletra %c", str1[1]);
	
	printf("\nEscreva a segunda palavra: ");
	gets(str2);

	printf("Palavra 2: %s", str2);
	printf("\nletra %c",str2[1]);
	
	
}
