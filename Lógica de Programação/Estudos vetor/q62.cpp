#include <stdio.h>

main(){
	int lista[10] = {1,2,3,4,5,6,7,8,9,10};
	int cont=0;
	
	for(int i=0;i<10;i++){
		if(lista[i]%2==0)
		cont++;
	}
	
	printf("%d",cont);
}
