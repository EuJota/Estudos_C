#include <stdio.h>

main(){
	int numero, dm,m,c,d,u,aux,Rdm,Rm,Rc,Rd,Ru;
	
	scanf("%d",&numero);
	
	if(numero>=1 && numero<=6){
		c=numero%2;
		d=(numero/2)%2;
		u=(numero/2)/2;
		
		Ru=u*100;
		Rd=d*10;
		Rc=c*1;
		
		printf("%d",Ru+Rd+Rc+Rm+Rdm);
	}else if(numero>=7&& numero<32){
		dm=numero%2;
		aux = numero/2;
		m=aux%2;
		c=((aux/2)/2)%2;
		d=(((aux/2)/2)/2)%2;
		u=(((aux/2)/2)/2)/2;
		
		Ru=u*100000;
		Rd=d*10000;
		Rc=c*1000;
		Rm=m*100;
		Rdm=dm*11;
		
		printf("%d",Ru+Rd+Rc+Rm+Rdm);
	}else{
		printf("Numero fora do intervalo");
	}
}
