#include <stdio.h>

main(){
	int num,dezena,unidade;
	
	printf("Digite um numero inteiro entre 1 e 100\n");
	scanf("%d",&num);
	
	dezena = num/10;
	unidade = num%10;
	
	
		if(num==10||num==11||num==12||num==13||num==14||num==15||num==16||num==17||num==18||num==19||num==100){
			switch(num){ 
			case 11: printf("onze");
			break;
			case 12: printf("doze");
			break;
			case 13: printf("treze");
			break;
			case 14: printf("quatorze");
			break;
			case 15: printf("quinze");
			break;
			case 16: printf("dezesseis");
			break;
			case 17: printf("dezessete");
			break;
			case 18: printf("dezoito");
			break;
			case 19: printf("dezenove");
			break;
			case 100: printf("cem");
			break;
		}
		}else{
			switch(dezena){
			case 1: printf("dez ");
			break;
			case 2: printf("vinte ");
			break;
			case 3: printf("trinta ");
			break;
			case 4: printf("quarenta ");
			break;
			case 5: printf("cinquenta");
			break;
			case 6: printf("sessenta ");
			break;
			case 7: printf("setenta ");
			break;
			case 8: printf("oitenta ");
			break;
			case 9: printf("noventa ");
			break;
			}
			
			switch(unidade){
			case 1: printf("um");
			break;
			case 2: printf("dois");
			break;
			case 3: printf("três");
			break;
			case 4: printf("quatro");
			break;
			case 5: printf("cinco");
			break;
			case 6: printf("seis");
			break;
			case 7: printf("sete");
			break;
			case 8: printf("oito");
			break;
			case 9: printf("nove");
			break;
		}
	}
}


