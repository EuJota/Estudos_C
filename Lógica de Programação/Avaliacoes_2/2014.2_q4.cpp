#include<stdio.h>

main(){
	int lista[3] = {4,2,4};
	int listaVerifica[3] = {0,0,0};
	
	
	for (int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(lista[i]!=listaVerifica[j]){
				listaVerifica[i] = lista[i];
			}else{
				break;
			}
		}
		printf("l: %d lv: %d\n",i,listaVerifica[i]);
	}
}

