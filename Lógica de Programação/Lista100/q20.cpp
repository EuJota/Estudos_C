#include <stdio.h>

main(){
	float valorMercadoria, valorEntrada, tiraResto, x, y;
	int valPrest1, valPrest2, resto, inteiroVal;
	
	scanf("%f",&valorMercadoria);
	inteiroVal = valorMercadoria;
	x = (inteiroVal-valorMercadoria)*(-1);
	y= (inteiroVal%3);
	
	printf("%.2f\n",x);
	printf("%.2f\n",y);
	
	if(x==0){
		valorEntrada = valorMercadoria/3;
		valPrest1=valorEntrada;
		valPrest2=valorEntrada;
		printf("entrada=%.2f, prest1=%d, prest2=%d", valorEntrada,valPrest1,valPrest2);
	}else{
		resto=x;
		valorEntrada=((((valorMercadoria-y)-x)/3)+y)+x;
		tiraResto = (valorMercadoria-y)-resto;
		valPrest1 = tiraResto/3;
		valPrest2 = valPrest1;
		printf("entrada=%.2f, prest1=%d, prest2=%d",valorEntrada,valPrest1,valPrest2);
	}
}
