#include <stdio.h>

main(){
	float r1,r2,r3, somaparalelo, somaserie;
	
	scanf("%f%f%f",&r1,&r2,&r3);
	
	somaparalelo = (1/r1)+1/r2;
	
	somaserie = somaparalelo+r3;
	
	printf("Resistencia do circuito =%.2f",somaserie);
}
