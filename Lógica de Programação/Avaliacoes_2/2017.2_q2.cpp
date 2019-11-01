#include<stdio.h>

main(){
	int k, teste, contk, d, conta;
	d=1;
	teste=12;
	contk=0;
	
	scanf("%d",&k);
	
	while(contk<k){
		while(d<=teste){
			if(teste%d==0){
				conta+=d;
			}
			d++;
		}
		if(conta>teste*2){
			printf("%d ", teste);
			contk++;
		}
		d=1;
		conta=0;
		teste++;
	}
}
