#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define size 2
#define sizeName 25

typedef struct stPessoa {
	int id;
	char nome[sizeName];
	char sexo;
	int idade;
} Pessoa;

main(){
	// todo esse código será alterado para funçoes
	int opcao, tn=0, retorno=0;
	char search[sizeName];
	char optionList;
	Pessoa pessoa[size];
	Pessoa organizaIdade[size];
	Pessoa maior;
	
	do{
		printf("0 - SAIR");
		printf("\n1 - CADASTRAR");
		printf("\n2 - EXCLUIR");
		printf("\n3 - LISTAR");
		printf("\n4 - LISTAR ORDENADO - a)nome b)idade");
		printf("\n5 - MOSTRAR MAIORES DE IDADE");
		
		printf("\nInforme sua opcao: ");
		scanf("%d",&opcao);
		getchar(); //limpeza de buffer - procurar opção melhor pra corrigir isso aqui
		switch(opcao){
			case 0:
				printf("Finalizando");
				//adicionar um exit aqui
				break;
			
			case 1:
				for(int i=0;i<size;i++){
					printf("Informe o nome: ");
					gets(pessoa[i].nome);
					printf("Informe o sexo: ");
					scanf("%c", &pessoa[i].sexo);
					printf("Informe a idade: ");
					scanf("%d",&pessoa[i].idade);
					pessoa[i].id = (rand() % 100)+i; //geracao de id "random", mas eu posso usar a funcao de hora e pegar a hora e colocar como id
					getchar();
					//add um if para fechar os cadastros
				}
				break;
			
			case 2:
				printf("Informe o nome do usuario que quer excluir: ");
				gets(search);
				tn = strlen(search);
				
				for(int i=0;i<size;i++){
					for(int j=0;j<tn;j++){
						if(search[j]==pessoa[i].nome[j]){
							retorno=1;	
						}else{
							retorno=0;
							break;
						}
					}
				}

				if(retorno==1)
					printf("usuario excluido\n");
				else
					printf("usuario nao encontrado\n");	
		
				break;
			
			case 3:
				for(int i=0;i<size;i++){
					printf(".................................\n");
					printf("Id: %d; Nome:%s; Sexo: %c;  Idade: %d\n", pessoa[i].id, pessoa[i].nome, pessoa[i].sexo, pessoa[i].idade);
					printf(".................................\n");
				}
				break;
				
			case 4:
				printf("Deseja listar por nome tecle a, deseja listar por idade tecle b: ");
				scanf("%c",&optionList);
					if(optionList=='a'){
						//para organizar por idade é só considerar as letras como string e comparar
					}else if(optionList=='b'){
						for(int i=0;i<size;i++){
							if(pessoa[i].idade>pessoa[i+1].idade){
								maior = pessoa[i];
							}
							organizaIdade[i]=maior;
						}
						for(int j=0;j<size;j++){
							printf("%s\n", organizaIdade[j].nome);
						}
					}
				break;
				
			case 5:
				for(int i=0;i<size;i++){
					if(pessoa[i].idade>=18){
						printf(".................................\n");
						printf("Id: %d; Nome:%s; Sexo: %c;  Idade: %d\n", pessoa[i].id, pessoa[i].nome, pessoa[i].sexo, pessoa[i].idade);
						printf(".................................\n");
					}else{
						printf("null\n");
					}
				}
				break;
				
			default:  printf("andamento");
		}
	}while(opcao!=00);
	
}
