#include <stdio.h>

main(){
	int tipo, lampadas;
	int potencia = 60;
	float largura, comprimento, area; 
	
	scanf("%d",&tipo);
	scanf("%f%f",&largura,&comprimento);
	
	area = largura*comprimento;
	if(area==1){
		lampadas =1;
		printf("%d",lampadas);
	}else{
		if(tipo==1){
		lampadas = (12*area)/potencia;
		printf("%d",lampadas);
	}else if(tipo==2){
		lampadas = (15*area)/potencia;
		printf("%d",lampadas);
	}else if(tipo==3){
		lampadas = (20*area)/potencia;
		printf("%d",lampadas);
	}else{
		printf("Classe nao existe");
	}
	}
}
