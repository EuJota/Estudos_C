#include <stdio.h> 

main (){
int num[100];
	/* Declara um vetor de inteiros de 100 posicoes*/
	int count=0; 
	int totalnums;
	 do { 
	 	printf("\nEntrecom um numero (0 p/ terminar): "); 
	 	scanf("%d",&num[count]); 
		count++; 
	}while (num[count-1]!=0); 
	 totalnums=count-1; 
	 printf("\n\n\n\t Os n�meros que voc� digitou foram:\n\n"); 
	 for (count=0;count<totalnums;count++) 
	 printf(" %d",num[count]);
}
