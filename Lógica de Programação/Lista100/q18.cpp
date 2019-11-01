#include <stdio.h>

main(){
	int a,b, repa, repb, permutaA,permutaB;
	
	scanf("%d%d",&a,&b);
	
	repa = a;
	permutaA=1;
	while(repa>0){
		permutaA *=repa; 
		repa--;
	}
	
	repb = b;
	permutaB=1;
	while(repb>0){
		permutaB *=repb;
		repb--;
	}
	
	
	printf("Permuta A=%d, Permuta B=%d",permutaA,permutaB);
}
