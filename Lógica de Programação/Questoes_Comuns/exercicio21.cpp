#include <stdio.h>

main(){
	int num;
	
	printf("Digite um numero\n");
	scanf("%d",&num);
	
	if(num%10==0){
		printf("Divisivel por 10");
	}else if(num%5==0){
		printf("Divisivel por 5");
	}else if(num%2==0){
		printf("Divisivel por 2");
	}else{
		printf("Nao é divisivel por 10 5 e 2\n");
	}
	
}
