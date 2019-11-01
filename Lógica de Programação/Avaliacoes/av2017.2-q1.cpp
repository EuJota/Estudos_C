#include <stdio.h>

main(){
	int n1, saida,m,c,d,u,aux,soma,digito,mM,cM,dM,uM;
	
	scanf("%d",&n1);
	
	m=n1/1000;
	aux=n1%1000;
	c=aux/100;
	d=(aux%100)/10;
	u=(aux%100)%10;
	
	soma = ((m+d)*3)+(c+u);
	
	digito = (10*c)-soma;
	
	mM=m*10000;
	cM=c*1000;
	dM=d*100;
	uM=u*10;
	
	saida = mM+cM+dM+uM+digito;
	
	printf("%d",saida);	
}
