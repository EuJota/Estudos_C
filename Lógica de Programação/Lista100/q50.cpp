#include <Stdio.h>

main(){
	int n, primo=0, d=2;
	
	scanf("%d", &n);
	
	if(n<=1)
		primo=1;
		
	while(primo==0 && d<=n/2){
		if(n%d==1)
			primo = 1;
		d++;
	}
	
	if(primo==1)
		printf("Primo");
	else
		printf("nao primo");	
}
