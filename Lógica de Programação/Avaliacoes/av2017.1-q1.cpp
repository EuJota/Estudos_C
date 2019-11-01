#include <stdio.h>

main(){
	int p,q,r;
	
	scanf("%d%d%d",&q,&p,&r);
	
	if(q==0&&r==0){
		printf("D");
	}else if(q==0&&r==1){
		printf("C");
	}else if(q==1&&p==1){
		printf("B");
	}else if(q==1&&p==1){
		printf("A");
	}
}
