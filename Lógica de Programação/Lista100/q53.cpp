#include <stdio.h>

main(){
	double popA = 5.000;
	double popB = 7.000;
	int cont=0;
	float natA = ((3.0*10.0)/100.0);
	float natB = ((2.0*10.0)/100.0);
	
	do{
		popA+=natA;
		popB+=natB;
		cont++;
	}while(popA<popB);
	
	printf("%d", cont);	
}
