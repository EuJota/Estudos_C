#include <stdio.h>
#define tam 5
main(){
	int lista[tam] = {0,1,2,3,4};
	int newlista[tam];
	int aux;
	
	for(int i=0;i<tam;i++){
		for(int j=0; j<tam-1;j++){
			if(lista[j]>lista[j+1]){
				aux = lista[j];
				lista[j] = lista[j+1];
				newlista[j] = lista[j+1];
				newlista[j+1]= aux;
				lista[j+1] = aux;
			}
		}
	}
	
	for(int i=0;i<tam;i++){
		printf("%d ",newlista[i]);
	}
}
