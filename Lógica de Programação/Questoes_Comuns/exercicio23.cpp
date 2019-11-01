#include <stdio.h>

main(){
	int n1,n2,n3,media;
	
	printf("Digite suas 3 notas\n");
	scanf("%d%d%d",&n1,&n2,&n3);
	
	media = (n1+n2+n3)/3;
	
	if(media>=5){
		printf("Aprovado, media =%d\n",media);
	}else{
		printf("Reprovado, media =%d\n",media);
	}
}
