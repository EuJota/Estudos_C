#include <stdio.h>

main(){
	int numero,modulo;
	
	scanf("%d",&numero);
	
	if(numero<0){
	modulo = numero*(-1);
	printf("%d",modulo); 	
	}else{
		printf("%d",numero);
	}

	
}
