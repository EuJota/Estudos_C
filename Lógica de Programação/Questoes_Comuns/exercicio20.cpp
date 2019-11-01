#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int numPessoas = 1, idade;
	float altura, peso;
	char corOlhos, corCabelo;
	int iddSuperior = 0, olhoAzul = 0, contRuiva = 0;
	float altInferior = 0, psInferior = 0, percentAzul = 0, mediaIdades = 0;
	
	while(numPessoas<4){
		printf("\nDigite sua idade, peso, altura\n");
		scanf("\n%d%f%f",&idade,&peso,&altura);
		printf("Digite a cor do olho");
		scanf("\n%c",&corOlhos);
		printf("\nDigite a cor do cabelo");
		scanf("\n%c",&corCabelo);
		
		if(idade>50 && peso<60){
			iddSuperior = iddSuperior + 1;
			psInferior = psInferior + 1;
		}
		
		if(altura < 1.50){
			altInferior +=1;
			mediaIdades += (idade+mediaIdades)/altInferior;
		}
		
		if(corOlhos == 'A'){
			olhoAzul +=1;
			percentAzul = ((olhoAzul+percentAzul)*(100))/numPessoas;
		}
		
		if(corCabelo == 'R' && corOlhos !='A'){
			contRuiva = contRuiva+1;
		}
		numPessoas ++;
	}
	printf("\nIdade > 50 = %d e peso < 60 = %.1f\n",iddSuperior, psInferior);
	printf("Media idade < 1.50 = %.2f\n", mediaIdades);
	printf("Porcentagem azuis = %.2f\n",percentAzul,"\%");
	printf("Ruiva sem olho azul = %d\n", contRuiva);
}

