#include <stdio.h>

main(){
	float valorApostado, premio;
	int nEscolhido, nSorteado, m,c,d,u, aux, mS,cS,dS,uS,auxS;
	
	scanf("%d",&nEscolhido);
	scanf("%f",&valorApostado);
	scanf("%d",&nSorteado);
	
	m= (nEscolhido%10000)/1000;
	aux = nEscolhido%10000;
	c=(aux%1000)/100;
	d=((aux%1000)%100)/10;
	u=((aux%1000)%100)%10;
	/////////////////////////////////////////////////
	mS= (nSorteado%10000)/1000;
	auxS = nSorteado%10000;
	cS=(aux%1000)/100;
	dS=((aux%1000)%100)/10;
	uS=((aux%1000)%100)%10;
	//////////////////////////////////////////////////
	if(nEscolhido>=0&&nEscolhido<=99999){
		if(nSorteado>=0&&nSorteado<=99999){
			if(m==mS&&c==cS&&d==dS&&u==uS){
				printf("%.2f",valorApostado*3000);
			}else if(c==cS&&d==dS&&u==uS){
				printf("%.2f",valorApostado*500);
			}else if(d==dS&&u==uS){
				printf("%.2f",valorApostado*50);
			}else{
				printf("Ganhou nada");
			}
		}
	}else{
		printf("n fora do intervalo");
	}
}
