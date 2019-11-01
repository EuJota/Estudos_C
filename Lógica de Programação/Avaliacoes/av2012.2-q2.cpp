#include <stdio.h>

main(){
	int hE,hS,mE,mS,dH,dM;
	
	scanf("%d%d",&hE,&mE);
	scanf("%d%d",&hS,&mS);
	
	if(hE>0&&hS>0&&mE>=0&&mS>=0){
		if(mS>mE){
			dH = hS-hE;
			dM = mS-mE;
			printf("%d:%d",dH,dM);
		}else if(mS==00){
			dH=(hS-hE)-1;
			dM=(mE-mS);
			printf("%d:%d",dH,dM);
		}else{
			dH=((hS-hE)*10)-((mS/10)+(mE/10));
			dM=((hS-hE)*100)-(mS+mE);
			
			printf("%d:%d",(dH/10),(dM%100));
		}
	}else{
		printf("fora do intervalo");
	}
}
