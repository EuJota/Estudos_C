#include <stdio.h>
#include <stdlib.h>

main(){
	
	float litrosVendidos, valorPago; 
	float precoGasolina = 3.10, precoAlcool = 2.30;
	char tipoCombustivel;
	
	printf("Para escolher o tipo do combustível digite G para gasolina e A para alcool\n");
	tipoCombustivel = getchar();
	printf("Digite quantos litros voce quer abastecer o veículo\n");
	scanf("%f",&litrosVendidos);
	
	if(tipoCombustivel=='A' && litrosVendidos<=25){
		valorPago = (litrosVendidos*precoAlcool) - ((litrosVendidos*2)/100);
		printf("\nValor pago =%2f\n",valorPago);
	}else if(tipoCombustivel =='A' && litrosVendidos>25){
		valorPago = (litrosVendidos*precoAlcool) - ((litrosVendidos*4)/100);
		printf("Valor pago =%2f\n",valorPago);
	}else if(tipoCombustivel=='G' && litrosVendidos<=25){
		valorPago = (litrosVendidos*precoGasolina) - ((litrosVendidos*3)/100);
		printf("Valor pago =%2f\n",valorPago);
	}else if(tipoCombustivel=='G' && litrosVendidos>25){
		valorPago = (litrosVendidos*precoGasolina) - ((litrosVendidos*5)/100);
		printf("Valor pago =%2f\n",valorPago);
	}
}
