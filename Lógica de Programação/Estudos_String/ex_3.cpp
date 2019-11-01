#include <stdio.h>
#include <string.h>

main(){
	char arrayNome[5][50];
	
	for(int i=0;i<5;i++){
		printf("escreva a string %d: ", i);
		gets(arrayNome[i]);
	}
	
	for(int i=0; i<5;i++){
		printf("\n%s",arrayNome[i]);
	}
}
