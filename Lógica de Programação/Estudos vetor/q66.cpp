#include <stdio.h>

main(){
	int listaOriginal[10] = {1,2,3,4,5,6,7,8,9,10};
	int listaCopia[10];
	
	for(int i=0;i<10;i++){
		listaCopia[i] = listaOriginal[i];
	}
	
	for(int j=0;j<10;j++){
		printf("%d ",listaCopia[j]);
	}
}
