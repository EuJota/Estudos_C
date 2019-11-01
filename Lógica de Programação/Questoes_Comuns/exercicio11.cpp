#include <stdio.h>
#include <stdlib.h>

main(){
	char letra;
	
	printf("Digite uma letra\n");
	scanf("%c",&letra);
	if(letra=='a'||letra=='e'||letra=='i'||letra=='o'||letra=='u'
		||letra=='A'||letra=='E'||letra=='I'||letra=='O'||letra=='U'){
			printf("eh vogal= %c\n",letra);
		}else{
			printf("eh consoante= %c\n",letra);
		}
}
