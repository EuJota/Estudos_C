#include<stdio.h>

main(){
	int m, n=1;
	char i='*';
	
	scanf("%d",&m);
	
	while(n<m){
		while(n<=m){
			printf("%c",i);
		n++;	
		}
		printf("\n");
		n++;
	}
}
