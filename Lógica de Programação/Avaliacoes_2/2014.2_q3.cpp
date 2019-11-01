#include <stdio.h>

main(){
	int num, n=1;
	float sum = 0.0, tri = 0.0;
	
	scanf("%d", &num);
	
	while(tri<=num){
		printf("%.1lf ",tri);
		tri+=n;
		sum +=(1.0/tri);
		n++;
	}
	
	printf("\n%.1lf",sum);
	
}
