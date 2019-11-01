#include <stdio.h>

main(){
	int numero, par;
	
	scanf("%d",&numero);
	
	par =  numero%2;
	
	if(par==0){
		printf("Par");
	}else{
		printf("Impar");
	}
}
