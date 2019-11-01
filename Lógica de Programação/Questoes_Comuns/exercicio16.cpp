#include <stdio.h>

main(){
	int tipoErva, areaPulverizada;
	float tipo1 = 50.0, tipo2 = 100.0, tipo3 = 150.0, tipo4 = 250.0, valorPago, valorAcima;
	
	printf("Digite 1, 2, 3 ou 4 para o tipo da erva\n");
	scanf("%d",&tipoErva);
	printf("\nDigite o tamanho da area a ser pulverizada\n");
	scanf("%d",&areaPulverizada);
	
	if(tipoErva==1){
		valorPago = areaPulverizada * tipo1;
		printf("Valor total=%2.f\n",valorPago);
		if(areaPulverizada>1000 && valorPago>750){
			valorPago = valorPago - ((valorPago*15)/100);
				if(valorPago>750){
					valorAcima = (valorPago - 750);
					valorPago = valorPago - ((valorAcima*10)/100);
					printf("Valor com desconto =%.2f\n",valorPago);
				}
		}else if(valorPago>750){
			valorAcima = (valorPago - 750);
			valorPago = valorPago - ((valorAcima*10)/100);
			printf("Valor com desconto =%.2f\n",valorPago);
		}else{
			valorPago;
			printf("Valor pago=%.2f\n",valorPago);
		}
	}
	
	else if(tipoErva==2){
		valorPago = areaPulverizada * tipo2;
		printf("Valor total=%2.f\n",valorPago);
		if(areaPulverizada>1000 && valorPago>750){
			valorPago = valorPago - ((valorPago*15)/100);
				if(valorPago>750){
					valorAcima = (valorPago - 750);
					valorPago = valorPago - ((valorAcima*10)/100);
					printf("Valor com desconto =%.2f\n",valorPago);
				}
		}else if(valorPago>750){
			valorAcima = (valorPago - 750);
			valorPago = valorPago - ((valorAcima*10)/100);
			printf("Valor com desconto =%.2f\n",valorPago);
		}else{
			valorPago;
			printf("Valor pago=%.2f\n",valorPago);
		}
	}
	
	else if(tipoErva==3){
		valorPago = areaPulverizada * tipo3;
		printf("Valor total=%2.f\n",valorPago);
		if(areaPulverizada>1000 && valorPago>750){
			valorPago = valorPago - ((valorPago*15)/100);
				if(valorPago>750){
					valorAcima = (valorPago - 750);
					valorPago = valorPago - ((valorAcima*10)/100);
					printf("Valor com desconto =%.2f\n",valorPago);
				}
		}else if(valorPago>750){
			valorAcima = (valorPago - 750);
			valorPago = valorPago - ((valorAcima*10)/100);
			printf("Valor com desconto =%.2f\n",valorPago);
		}else{
			valorPago;
			printf("Valor pago=%.2f\n",valorPago);
		}
	}
	
	else if(tipoErva==4){
		valorPago = areaPulverizada * tipo4;
		printf("Valor total=%2.f\n",valorPago);
		if(areaPulverizada>1000 && valorPago>750){
			valorPago = valorPago - ((valorPago*15)/100);
				if(valorPago>750){
					valorAcima = (valorPago - 750);
					valorPago = valorPago - ((valorAcima*10)/100);
					printf("Valor com desconto =%.2f\n",valorPago);
				}
		}else if(valorPago>750){
			valorAcima = (valorPago - 750);
			valorPago = valorPago - ((valorAcima*10)/100);
			printf("Valor com desconto =%.2f\n",valorPago);
		}else{
			valorPago;
			printf("Valor pago=%.2f\n",valorPago);
		}
	}
}
