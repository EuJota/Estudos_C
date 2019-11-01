#include <stdio.h>

main(){
	float lado, area, perimetro;
	
	printf("Digite o lado do quadrado\n");
	scanf("%f",&lado);
	
	area = lado*lado;
	perimetro = 4*lado;
	
	printf("Area = %f, Perimetro =%f", area,perimetro);
}
