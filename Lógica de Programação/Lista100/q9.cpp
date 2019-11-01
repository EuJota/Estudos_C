#include <stdio.h>

main(){
	float raio, altura, vLata;
	float pi = 3.14;
	
	printf("Digite o raio e a altura da lata\n");
	scanf("%f%f",&raio,&altura);
	
	vLata =((raio*raio)*pi)*altura;
	
	printf("Volume da lata =%.2f",vLata);
	
}
