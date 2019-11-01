#include <stdio.h>

main(){
	int v1,v2,v3;
	
	printf("Digite 3 valores inteiros");
	scanf("%d%d%d",&v1,&v2,&v3);
	
	if(v1>v2&&v2>v3){
	printf("%d",v1+v2);	
	}else if(v1>v3&&v3>v2){
		printf("%d",v1+v3);
	}else if(v3>v1&&v1>v2){
		printf("%d",v3+v1);
	}else if(v3>v2&&v2>v1){
		printf("%d",v3+v2);
	}else if(v2>v3&&v3>v1){
		printf("%d",v2+v3);
	}else{
		printf("%d",v2+v1);
	}
}
