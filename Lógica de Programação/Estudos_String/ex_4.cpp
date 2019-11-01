#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

main(){ 
char cargo[20]; 
char gerente[] = "gerente";
char tecnico[] = "tecnico";
char eng[] = "engenheiro";
float salario, novoSalario; 
int i=0, equals=1, equalsG=1, equalsT=1, equalsE=1;

printf("\nDigite o cargo: "); 
scanf("%s", cargo); 

printf("\nDigite o salario: "); 
scanf("%f", &salario); 


	while(cargo[i]!= '\0'){
		if(cargo[0]!=gerente[0] && cargo[0]!=tecnico[0] && cargo[0]!=eng[0]){
			equals=0;
			break;
		}else if(cargo[i]!=gerente[i]){
			equalsG = 0;
		}else if(cargo[i]!=tecnico[i]){
			equalsT = 0;
		}else if(cargo[i]!=eng[i]){
			equalsE=0;
		}
		cargo[i++];
	}
	
	if(equals==0){
		novoSalario = (salario*40)/100;
		printf("%.2lf",novoSalario+salario);
	}else if(equalsG==1){
		novoSalario = (salario*10)/100;
		printf("%.2lf",novoSalario+salario);
	}else if(equalsT == 1){
	novoSalario = (salario*30)/100;
		printf("%.2lf",novoSalario+salario);
	}else if(equalsE==1){
	novoSalario = (salario*20)/100;
		printf("%.2lf",novoSalario+salario);
	}
	
     
}
