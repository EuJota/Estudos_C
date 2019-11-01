#include <stdio.h>

main(){
	int i,j,m;
	
	scanf("%d%d%d",&i,&j,&m);
	
	for(int x=i;x>0;x--){
		for(int y=j;y>0;y--){
			if(x%m == y%m && y>=m && x >=m && x!=y){
				printf("%d congruente modulo %d a %d\n",x,m,y);
			}
		}
	}
}
