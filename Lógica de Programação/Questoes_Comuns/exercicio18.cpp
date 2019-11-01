#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	char codigoTransacao;
	float valorTransacao, 
	 	  valorTotalCompras=0;
	float valorVista = 0,
		  valorPrazo = 0;
	int nTransacoes;
	
	nTransacoes = 0;
	while(nTransacoes<5){
		printf("Digite o codigo da transacao, 'V para a vista e P para prazo'\n");
		scanf("\n%c",&codigoTransacao);
		//codigoTransacao = getche(); // Por que nao funcionou com o scanf nem o getchar
		printf("Digite o valor da transacao\n");
		scanf("%f",&valorTransacao);
		
		if(codigoTransacao == 'V'){
			valorVista = valorVista+valorTransacao;
		}else if(codigoTransacao == 'P'){
			valorPrazo = valorPrazo+valorTransacao;
		}
		valorTotalCompras = (valorTotalCompras+valorTransacao);
		nTransacoes++;
	}  	  
	
	printf("Valor total das compras a vista=%.2f\n",valorVista);
	printf("Valor total das compras a prazo=%.2f\n",valorPrazo);
	printf("Valor de todas as compras=%2.f\n",valorTotalCompras);
	printf("Valor da primeira prestacao das compras a prazo juntas=%.2f", valorPrazo/3); // entender o que essa pergunta diz  
}
