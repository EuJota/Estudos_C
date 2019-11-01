#include<stdio.h>

main(){
	float p1,p2,c1,c2,l1,l2;
	
	scanf("%f%f%f%f",&p1,&p2,&c1,&c2);
	
	l1=p1*c1;
	l2=p2*c2;
	
	if(l1>l2){
		printf("lado 1");
	}else if(l2>l1){
		printf("lado 2");
	}else if(l1==l2){
		printf("equilibrada");
	}
}
