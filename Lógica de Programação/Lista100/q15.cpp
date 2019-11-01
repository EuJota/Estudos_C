#include <stdio.h>

main(){
	
	float suaAltura, predioAltura, suaSombra, predioSombra;
	
	printf("Sua altura e sua sombra\n");
	scanf("%f%f",&suaAltura,&suaSombra);
	printf("Sombra do predio\n");
	scanf("%f",&predioSombra);
	
	predioAltura = (predioSombra/suaSombra)*suaAltura;
	
	printf("Altura do predio =%.2f",predioAltura);
}
