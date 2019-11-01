#include <stdio.h>
#include <math.h>

main(){
	int cima=2, baixo=50, elevado=1, indice=0;
	float resultado;
	
	while(baixo>0){
		resultado = (pow(cima,elevado)) /baixo;
		printf("%d-->%d/%d-->^%d = %f\n",indice, cima, baixo, elevado, resultado);
		indice++;
		elevado++;
		baixo--;
		
	}
	
	//printf("%d", resultado);
	
	
}
