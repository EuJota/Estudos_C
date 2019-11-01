#include <stdio.h>

main(){
	float hChico, hZe, cresceChico, cresceZe;
	int cont =0;
	
	hChico = 1.50;
	hZe = 1.10;
	cresceChico = 0.02;
	cresceZe = 0.03;
	
	while(hChico>=hZe){
		hChico+=cresceChico;
		hZe+=cresceZe;
		cont++;
	}
	
	printf("%d", cont);
}
