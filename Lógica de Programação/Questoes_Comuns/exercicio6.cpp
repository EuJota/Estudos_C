#include<stdio.h>
#include <stdlib.h>

main(){
	double n1, n2, n3, media;
	
	printf("Digite as 3 notas");
	scanf("%lf%lf%lf",&n1,&n2,&n3);
	
	media = (n1+n2+n3)/3;
	
	printf("Media %3.lf\n", media);
	
	system("PAUSE");
}
