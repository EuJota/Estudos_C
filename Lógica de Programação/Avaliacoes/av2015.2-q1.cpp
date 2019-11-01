#include <stdio.h>

main(){
	float salario, desconto;
	
	scanf("%f",&salario);
	
	desconto = (salario*11)/100;
	
	if(desconto >= 570.88){
		desconto = 570.88;
		printf("Desconto = %.2f",desconto);
	}else{
		printf("Desconto =%.2f",desconto);
	}
}
