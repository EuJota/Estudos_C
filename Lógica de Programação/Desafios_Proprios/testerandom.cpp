#include <stdio.h>
 
int main(void) {
 
	// Define the two integer variables
	int L,R;
	int i;
    
	// Get L and R from the user
	scanf("%d", &L);
	scanf("%d", &R);
    
	// Write here the logic to print all integers between L and R
	int n;
	n=(R-L);
	int list[n];
	i=0;
    
    do{
        list[i]=L;
        L++;
        i++;
    }while(i<=n);
 
    for(int k=0;k<=n;k++){
        printf("%d ",list[k]);
    }
 
    
	return 0;
}
