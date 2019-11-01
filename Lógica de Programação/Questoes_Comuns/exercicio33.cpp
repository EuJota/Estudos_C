#include <stdio.h>
#include <stdlib.h>

main(){
	int idade, idosoLeve=0, somaIdade=0, contAltura=0, mediaIdade=0,  contRuiva=0,  n=0;
	char corOlho, corCabelo;
	float altura, peso, contAzul=0;
	double porcentagemAzul;
	
	//for(int i=0;i<2;i++)
	while(n<6){
		printf("\nSua idade\n");
		scanf(" %d",&idade);
		printf("\nSeu peso e altura\n");
		scanf(" %f%f", &peso,&altura);
		printf("\nCor do olho");
		scanf(" %c", &corOlho);
		printf("\nCor do cabelo");
		scanf(" %c", &corCabelo);
		//fflush(stdin);
		
		if(idade>50 && peso <60){
			idosoLeve++;
		}
		if(altura<1.50){
			somaIdade+=idade;
			contAltura++;
		}
		if(corOlho=='A'){
			contAzul++;
		}
		if(corCabelo=='R' && corOlho!='A'){
			contRuiva++;
		}
		n++;
	}

	//mediaIdade=somaIdade/contAltura;
	
	printf("a: %d\n", idosoLeve);
	printf("b: %d\n", mediaIdade);
	printf("c: %.2lf%%\n", (contAzul/6)*100);
	printf("d: %d\n", contRuiva);
	system("PAUSE");
}
