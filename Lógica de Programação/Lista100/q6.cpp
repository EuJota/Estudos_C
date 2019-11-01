#include <stdio.h>

main(){
	int num1, num2, resto,quoc;
	
	printf("Digite dois numeros inteiros\n");
	scanf("%d%d",&num1,&num2);
	
	quoc = num1/num2;
	resto = num1%num2;
	
	printf("Quociente =%d, Resto=%d",quoc, resto);
}
