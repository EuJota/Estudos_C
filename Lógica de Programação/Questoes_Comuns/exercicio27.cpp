#include <stdio.h>

main(){
	int n, fator, dec;
	
	scanf("%d",&n);
	
	dec=n;
	fator=1;
	
	while(dec>0){
		fator*=dec;
		dec--;
	}
	printf("%d", fator);
}
