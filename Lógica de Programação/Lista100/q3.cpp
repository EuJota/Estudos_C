#include <stdio.h>

main(){
	float raio, area, perimetro;
	float pi = 3.14;
	
	printf("Digite o raio\n");
	scanf("%f",&raio);
	
	area = (raio*raio)*pi;
	perimetro = 2*pi*raio;
	
	printf("Area =%f, Perimetro =%f", area, perimetro);
}
