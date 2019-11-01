#include <stdlib.h>
#include <stdio.h>

main (){
	int portas[5]  = {1,3,-4,2,3} ;
	int maior, aux, resultado;
	int entsai[2];
	
	maior = 0; aux = 0; resultado = 0;

		for (int j = 0; j<5; j++){
			for (int i = j+1; i<6; i++){
				if (aux == 0){
					maior = portas[j] + portas[i];
					aux++;
				} else {
					maior+= portas[i];
					};
				if (resultado < maior){
					resultado = maior;
					entsai[0] = j;
					entsai[1] = i;
				}
				if (i==5) aux = 0;
			}	
		}
		

	
	printf("\n\nNumero maximo de vidas eh %d . \n", resultado);
	printf("\nPorta de entrada %d e saida %d\n\n", entsai[0], entsai[1]);
}
