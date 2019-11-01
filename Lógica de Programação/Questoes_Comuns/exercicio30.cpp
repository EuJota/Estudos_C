#include <stdio.h>
#include <stdlib.h>

main(){
	int op;
	float n1,n2,media,nota1,nota2,nota3,p1,p2,p3;
	
	do{
		printf("\n1. Media aritmetica\n");
		printf("2. Media ponderada\n");
		printf("3. Sair\n");
		scanf(" %d",&op);
		
		if(op==1){
			printf("Nota 1 e nota 2\n");
			scanf(" %f%f",&n1,&n2);
			media=(n1+n2)/2;
			printf("Media =%.2f",media);
		}else if(op==2){
			printf("Nota 1, nota 2, nota 3\n");
			scanf("%f%f%f",&nota1,&nota2,&nota3);
			printf("\nPeso 1, peso 2, peso 3\n");
			scanf(" %f%f%f",&p1,&p2,&p3);
			media = ((nota1*p1)+(nota2*p2)+(nota3*p3))/(p1+p2+p3);
			printf("%.2f",media);
		}else{
			exit(0);
		}
		
	}while(op<=3);
}
