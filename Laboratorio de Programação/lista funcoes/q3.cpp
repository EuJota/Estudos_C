#include <stdio.h>

int fatorial(int num){
	int cont = 0;
	int fat=1;
	
	if(num==1){
		return 1;
	}else{
		while(num>cont){
			fat*=num; //forma compacta da operação de multiplicacao e atribuicao, eh o mesmo que fat=fat*num;
			num--;
		}
		
	return fat;
	}
}

main(){
	int n1, res;
	
	printf("informe um numero: ");
	scanf("%d",&n1);
	res = fatorial(n1);
	
	if(res==1){
		printf("Esse numero nao tem um fatorial");
	}else{
		printf("fatorial: %d", res);
	}
}
