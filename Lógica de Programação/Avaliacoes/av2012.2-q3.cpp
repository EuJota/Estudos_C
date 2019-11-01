#include <stdio.h>

main(){
	float n1, n2, n3, n4, media, final, mFinal;
	
	scanf("%f%f%f", &n1,&n2, &n3);
	
	if(n1<=10&&n2<=10&&n3<=10){
		media = (n1+n2+n3)/3;
		if(media>=7){
			printf("Aprovado com media %.1f",media);
		}else{
			final = 15-(media*2);
			printf("nota minima na prova final para ser aprovado =%.1f", final);
		}
	}else{
		printf("Notas fora do intervalo");
	}
}
