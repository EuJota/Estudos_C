#include<stdio.h>
main(){
	float colesterol, hdl, tri, ldl;
	
	scanf("%f%f%f",&colesterol,&hdl,&tri);
	
	ldl = (colesterol-hdl)-((20*tri)/100);
	
	if(ldl<100){
		printf("otimo");
	}else if(ldl>=100&&ldl<=129){
		printf("sub otimo");
	}else if(ldl>=130&&ldl<=159){
		printf("limitrofe");
	}else if(ldl>=160&&ldl<=189){
		printf("alto");
	}else if(ldl>=190){
		printf("muito alto");		
	}
}
