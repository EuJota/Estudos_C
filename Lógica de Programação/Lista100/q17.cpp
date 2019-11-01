#include<stdio.h>

main(){
	int valorSaque, cem=0, cinquenta=0, vinte=0, dez=0, cinco=0, dois=0, um=0;
	
	scanf("%d",&valorSaque);
	
	if(valorSaque<5){
		dois = (valorSaque)/2;
		um = (valorSaque%2)/1;
	}else{
		cem = valorSaque/100;
		cinquenta = (valorSaque%100)/50;
		vinte = (valorSaque%50)/20;
		dez = (valorSaque%20)/10;
		cinco = (valorSaque%10)/5;
		dois = (valorSaque%5)/2;
		um = 0;
	}
	


	
	
	printf("Notas cem=%d",cem);
	printf("Notas cinquenta=%d",cinquenta);
	printf("Notas vinte=%d",vinte);
	printf("Notas dez=%d",dez);
	printf("Notas cinco=%d",cinco);
	printf("Notas dois=%d",dois);
	printf("Notas um=%d",um);	
}
