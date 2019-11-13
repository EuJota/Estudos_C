#include <stdio.h>



void CadastrarProfessor(){


	typedef struct amd{
	int ano;
	int mes;
	int dia;
	}Data;


	int numeroDeProfessores;
	int numeroDeProfessoresCadastrados = 0;

	/* tipo de dado struct para armazenar o cadastro dos professores*/

	typedef struct cadastroProfessor{
		char nome[50];
		int matricula;
		char sexo;
		long int cpf;
		Data dataNascimento;
	}professor;

	printf("\n===========================================================================\n\n");

	printf("informe quantos Professores serao  cadastrados: ");
	getchar();
	scanf("%d",&numeroDeProfessores);
	
	professor listaDeProfessores[numeroDeProfessores];
	

	while(numeroDeProfessoresCadastrados<numeroDeProfessores){

		printf("\n===========================================================================\n\n");
		
		printf("informe o nome do Professor: ");
		getchar();
		fgets(listaDeProfessores[numeroDeProfessoresCadastrados].nome,50,stdin);
		getchar();

		printf("De um numero de matricula para o Professor: ");
		
		scanf("%d",&listaDeProfessores[numeroDeProfessoresCadastrados].matricula);

		printf("Informe o sexo do Professor (f ou m): ");
		
		 getchar();

		scanf("%c",&listaDeProfessores[numeroDeProfessoresCadastrados].sexo);
		
		printf("infome a data de nascimento ex: (07 12 1993) com os espacos: ");

		getchar();
		
		scanf("%d %d %d",&listaDeProfessores[numeroDeProfessoresCadastrados].dataNascimento.dia,
						&listaDeProfessores[numeroDeProfessoresCadastrados].dataNascimento.mes,
						&listaDeProfessores[numeroDeProfessoresCadastrados].dataNascimento.ano);

		printf("Informe o CPF do Professor : ");
		
		scanf("%d",&listaDeProfessores[numeroDeProfessoresCadastrados].cpf);

		getchar();

		printf("\n===========================================================================\n\n");
		
		numeroDeProfessoresCadastrados++;

	}//fim while


} // fim da função CadastrarProfessor