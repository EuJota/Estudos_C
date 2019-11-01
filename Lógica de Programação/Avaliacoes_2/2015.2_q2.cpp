#include <stdio.h>

main(){
	int num, aux, conta, div, brasileiro, numok;
	int arm;
	
	conta=0;
	div=2;
	aux=0;
	brasileiro=0;
	
	scanf("%d",&num);
	numok=num;
	
	while(div<num-1){
		while(num>=div){
			if(aux==0){
				conta=num%div;
				arm=conta;
				num/=div;
				aux++;
			}else{
				conta=num%div;
				if(conta==arm){
					arm=conta;
					num/=div;
				}else{
					break;
				}	
			}
		}
	if(arm==conta && conta==num){
		brasileiro = 1;
		break;
	}else{
		aux=0;
		num=numok;
		div++;
	}	
}
	
	if(brasileiro==1){
		printf("Brasileiro");
	}else{
		printf("Nao brasileiro");
	}
}
