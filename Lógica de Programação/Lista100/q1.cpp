#include <stdio.h>

main(){
	float base, altura, area, perimetro;
	
	printf("Digite a base e a altura\n");
	scanf("%f%f",&base,&altura);
	
	area = base*altura;
	perimetro = (2*base)+(2*altura);
	
	printf("Base =%f, altura =%f",area,perimetro);	
}
