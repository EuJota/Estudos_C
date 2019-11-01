#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	float altura, pesoIdeal;
	char sexo;
	
	printf("\nDigite a sua altura em metros");
	scanf("%f",&altura);
	
	printf("\nDigite seu sexo\n");
	sexo = getche();
	
	pesoIdeal = (72.2*altura)-58;
	
	printf("\nO sexo digitado foi %c e o peso ideal desta pessoa e %2.f quilos\n", sexo, pesoIdeal);
	system("PAUSE");
}
