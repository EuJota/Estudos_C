#include <stdio.h>

main(){
	float lado1, lado2, lado3, perimetro;
	
	printf("Digite o valor dos lados\n");
	scanf("%f%f%f",&lado1,&lado2,&lado3);
	
	perimetro = lado1+lado2+lado3;
	
	printf("Perimetro =%f",perimetro);
	
}
