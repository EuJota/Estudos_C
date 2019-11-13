#include <stdio.h>

#include <stdlib.h>

typedef struct amd{
	int ano;
	int mes;
	int dia;
}Data;

typedef struct cadastroAluno{ 
	char nome[50];
	int matricula;
	char sexo;
	long int cpf;
	Data dataNascimento;
	
}aluno;

void CadastrarAluno(){

	
	
	int numeroDeAlunos;
	int numeroDeAlunosCadastrados = 0;
	
	/* tipo de dado struct para armazenar o cadastro dos alunos*/

	printf("\n===========================================================================\n\n");
	

	printf("informe quantos Alunos serao  cadastrados: ");
	getchar();
	scanf("%d",&numeroDeAlunos);
	getchar();
	aluno listaDeAlunos[numeroDeAlunos];
	

	while(numeroDeAlunosCadastrados<numeroDeAlunos){
		printf("\n===========================================================================\n\n");
		
		printf("informe o nome do aluno: ");
		fgets(listaDeAlunos[numeroDeAlunosCadastrados].nome,50,stdin);

		printf("De um numero de matricula para o aluno: ");
		scanf("%d",&listaDeAlunos[numeroDeAlunosCadastrados].matricula);

		getchar();

		printf("Informe o sexo do aluno (f ou m): ");
		scanf("%c",&listaDeAlunos[numeroDeAlunosCadastrados].sexo);

		getchar();
		
		printf("infome a data de nascimento ex: (07 12 1993) com os espacos");
		scanf("%d %d %d",&listaDeAlunos[numeroDeAlunosCadastrados].dataNascimento.dia,
						&listaDeAlunos[numeroDeAlunosCadastrados].dataNascimento.mes,
						&listaDeAlunos[numeroDeAlunosCadastrados].dataNascimento.ano);

		printf("Informe o CPF do Aluno : ");
		scanf("%d",&listaDeAlunos[numeroDeAlunosCadastrados].cpf);

		getchar();

		printf("\n===========================================================================\n\n");


		numeroDeAlunosCadastrados++;
			
	
	}//fim while
		

}// fim funcao CadastrarAluno


