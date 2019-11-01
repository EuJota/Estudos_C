#include <stdio.h>
#include <math.h>

main(){
	int elevado= 1, dividendo= 50, n = 2;
	float divisao=0;
	
	while(elevado<51 && dividendo >0){
		divisao += (pow(n,elevado))/dividendo;
		elevado++;
		dividendo--;
	}
	printf("Soma =%.2f",divisao);
	
}
