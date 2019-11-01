#include <stdio.h>

main(){
	int decimal, octal, aux, c,d,u;
	
	scanf("%d",&octal);
	
	if(octal<=777&&octal>0){
		c = octal/100;
		aux = octal%100;
		d= aux/10;
		u = aux%10;
		
		decimal = (c*(8*8))+(d*8)+(u*1);
		
		printf("%d",decimal);
	}else{
		printf("numero fora do intervalo");
	}
}
