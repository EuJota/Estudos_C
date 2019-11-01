#include <stdio.h>
#include <string.h>

struct stAluno{
	char nome[50];
	char disciplina[20];
	float nota_prova1;
	float nota_prova2;
};


	struct stAluno aluno;
main(){
	printf("---------Cadastro de Aluno----------");
	
	printf("\nNome do aluno......:");
	gets(aluno.nome);
	printf("\nDisciplina.......:");
	gets(aluno.disciplina);
	printf("\nInforme a primeira nota....:");
	scanf("%f",&aluno.nota_prova1);
	printf("\nInforme a segunda nota....:");
	scanf("%f",&aluno.nota_prova2);
	
	printf("-------Escrevendo os dados da struct--------");
	printf("\nNome: %s",aluno.nome);
	printf("\nDisciplina: %s",aluno.disciplina);
	printf("\nNota 1: %.2f",aluno.nota_prova1);
	printf("\nNota 2: %.2f",aluno.nota_prova2);
}
