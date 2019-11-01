#include <stdio.h>

main(){
	float numero;
	
	scanf("%f",&numero);
	
	if(numero==0){
	printf("Neutro");
	} else if(numero>0){
		printf("POSITIVO");
	}else{
		printf("Negativo");
	}
}
