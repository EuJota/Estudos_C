#include <stdio.h>
#include <stdlib.h>

main(){
	float latasTinta;
	float custoPintar, altura, raio, areaCilindro, litrosTinta;
	float valorLata =20.00;
	float pi = 3.14;
	
	printf("Digite a altura e raio do cilindo\n");
	scanf("%f%f",&altura,&raio);
	
	areaCilindro = ((pi*(raio*raio))+(2*(pi*raio*altura)));
	
	litrosTinta = areaCilindro/3;
	latasTinta = (litrosTinta/5);
	custoPintar = latasTinta*valorLata;
	
	printf("Vai precisar de %.1f latas de tinta e o valor total eh de %.3f",latasTinta,custoPintar);
}
