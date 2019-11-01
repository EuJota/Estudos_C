#include <stdio.h>

main(){
	int lista[30];
	int diaMaiorChuva=0, diaMenorChuva = 30;
	int mediaChuva1=0, mediaChuva2=0;
	
	for(int i=0;i<30;i++){
		scanf("%d",&lista[i]);
		if(lista[i]>diaMaiorChuva)
			diaMaiorChuva=lista[i];
		if(lista[i]<diaMenorChuva)
			diaMenorChuva = lista[i];
	}
	for(int k=0;k<15;k++){
		mediaChuva1 +=lista[k];
	}
	for(int j=15;j<30;j++){
		mediaChuva2 +=lista[j];
	}
	
	printf("Dia de mais chuva: %d\n", diaMaiorChuva);
	printf("Dia de menos chuva: %d\n", diaMenorChuva);
	printf("Media chuvas quinzena 1: %d\n", mediaChuva1/15);
	printf("Media chuvas quinzena 1: %d\n", mediaChuva2/15);
}
