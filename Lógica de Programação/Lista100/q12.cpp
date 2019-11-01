#include <stdio.h>

main(){
	float vM, vK;
	
	printf("Digite a velocidade em m/s\n");
	scanf("%f",&vM);
	
	vK = vM*3.6;
	
	printf("Velocidade em km/h=%.2f",vK);
}
