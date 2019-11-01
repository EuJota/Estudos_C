#include <stdio.h>
#include <math.h>

main(){
	int a,b,c,delta,r1,r2;
	
	printf("Digite os valores de a b c\n");
	scanf("%d%d%d",&a,&b,&c);
	
	delta = (b*b) - (4*a*c);
	
	if(delta>0){
		r1 = (-b+(sqrt(delta)))/(2*a);
		r2 = (-b-(sqrt(delta)))/(2*a);
		printf("Raiz 1 = %d, Raiz 2 = %d", r1,r2);
	}else if(delta ==0){
		r1 = (-b+0)/(2*a);
	}else if(delta<0){
		printf("Nao existem raízes reais\n");
	}
}
