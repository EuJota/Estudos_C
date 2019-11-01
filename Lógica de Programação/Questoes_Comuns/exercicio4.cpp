#include <stdio.h>
#include <stdlib.h>

main(){
	double n1, n2, n3, media;
	
	scanf("%lf%lf%lf", &n1, &n2,&n3);
	
	media = (n1+n2+n3)/3;
	
	printf("%f\n",n1);
	printf("%f\n",n2);
	printf("%f\n",n3);
	printf("%lf",media);
}
