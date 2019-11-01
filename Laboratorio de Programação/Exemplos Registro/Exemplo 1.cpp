#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct stEndereco{
	char rua[40];
	int num;
	int complemento;
	char cep[10];
	char estado[20];
	char cidade[30];
};

main(){
	struct stEndereco endereco1, endereco2;
	
	strcpy(endereco1.rua, "Rua siqueira campos");
	endereco1.num = 44;
	endereco1.complemento = 3;
	strcpy(endereco1.cep, "40301-070");
	
	
	strcpy(endereco2.rua, "Avenida Presidente Vargas");
	endereco2.num = 226;
	endereco2.complemento = 0;
	strcpy(endereco2.cidade, "Santo amaro");
	strcpy(endereco2.estado, "BA");
	strcpy(endereco2.cep, "44200-000");
	
	printf("\n%s %d %d", endereco1.rua, endereco1.num, endereco1.complemento);
	printf("\n%s %s %s", endereco1.cep, endereco1.cidade, endereco1.estado);
	printf("\n%s %d %d", endereco2.rua, endereco2.num, endereco2.complemento);
	printf("\n%s %s %s", endereco2.cep, endereco2.cidade, endereco2.estado);
	
}
