#include <stdio.h>

main(){
	int num, c, d, u;
	
	scanf("%d",&num);
	
	c = num%10; // ultimo número
	d = num/100; // primeiro numero
	u = (num%100)/10; // numero do meio

	if(num>=100&&num<=999){
	
	printf("numero =%d e inverso =%d%d%d",num,c,u,d);
	}else{
		printf("Numero invalido");
	}	
	
}
