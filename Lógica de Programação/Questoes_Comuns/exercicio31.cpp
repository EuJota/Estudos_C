#include <stdio.h>

main(){
	char cod;
	float valor, totalVista=0, totalPrazo=0, totalCompras=0;
	
	for(int i=0; i<5;i++){
		printf("\nCodigo\n");
		scanf(" %c",&cod);
		printf("\nValor da transacao\n");
		scanf(" %f",&valor);
		
		totalCompras+=valor;
		
		if(cod=='V'){
			totalVista+=valor;
		}else if(cod=='P'){
			totalPrazo+=valor;
		}
	}
	
	printf("\nCompras a vista: %.2f\n", totalVista);
	printf("Compras parceladas: %.2f\n", totalPrazo);
	printf("Todas as compras: %.2f\n", totalCompras);
	printf("Primeira prestacao todas as parceladas\n",totalPrazo/3);
}
