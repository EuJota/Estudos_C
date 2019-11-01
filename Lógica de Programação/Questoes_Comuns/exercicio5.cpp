#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

main(){
	int i,j;
	float x;
	char c;
	char nome[30];
	
//entrada de dados 
scanf("%d", &i); 
scanf("%d %f", &j, &x); 
c = getchar();
scanf("%s", nome); 

// exibicaode dados 
printf("%d", i); 
printf("%d, %f", j, x); 
printf("%c", c); 
printf("%s", nome);

system("PAUSE");

}
