#include<stdio.h>
#include<string.h>
#include "professor.h"
#include "aluno.h"
#define sizeCode 4
#define sizeName 25
#define sizeTurma 40
#define SUCESSO 1
#define FALHA 0

typedef struct disciplina{
    char nomeDisciplina[sizeName];
    char codigo[sizeCode];
    int semestre;
    int codigoProfessor;
	int vagasTotal;
	int qtdMatriculados;
	int alunos[sizeTurma];
} Disciplina;

// int validadorDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[], int retornos[]){
//     //tentar retornar a posicao que foi encontrada a disciplina para faciitar outros codigos
//     for(int i=0;i<qtdDisciplinas;i++){
//         if(strcmp(codDisciplina, listaDisciplinas[i].codigo)==0){
//            retornos[0]= SUCESSO;
//            retornos[1] = i;
//            return SUCESSO;
//         }
//     }
// }

int cadastrarDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas){ 
//cadastra disciplinas
    //chamar o algoritmo de lista disciplina
	char codigo[sizeCode];
	
	printf("\nInforme o codigo da disciplina");
	fgets(codigo, sizeCode, stdin);

	for (int i = 0; i < qtdDisciplinas; i++)	//verifica se exite disciplina com o codigo
		if (strcmp(codigo, listaDisciplinas[i].codigo) == 0) {			
			printf("\nErro - ja existe disciplina cadastrada com esse codigo.");
			return FALHA;
		}

	strcpy(listaDisciplinas[qtdDisciplinas].codigo, codigo);
	printf("\nInforme o nome da disciplina: ");
	fgets(listaDisciplinas[qtdDisciplinas].nomeDisciplina, sizeName, stdin);
	printf("\nInforme o codigo do Professor responsavel: ");
	scanf("%d",&listaDisciplinas[qtdDisciplinas].codigoProfessor);
	printf("\nInforme o semestre: ");
	scanf("%d", &listaDisciplinas[qtdDisciplinas].semestre);
	listaDisciplinas[qtdDisciplinas].vagasTotal = sizeTurma;
	listaDisciplinas[qtdDisciplinas].qtdMatriculados = 0;
	printf("\nEssa disciplina dispoe de %d vagas", sizeTurma);
	getchar();
    return SUCESSO; //lembrar de incrementar qtdDisciplinas no main
}

void listarDisciplinas(Disciplina listaDisciplinas[], int qtdDisciplinas){
//lista todas as disciplinas
    for(int i =0; i<qtdDisciplinas;i++){
        printf("\nDisciplina: %s | Codigo: %s | Semestre: %d | Vagas Disponiveis: %d \n",
        listaDisciplinas[i].nomeDisciplina,
        listaDisciplinas[i].codigo,
        listaDisciplinas[i].semestre,
		listaDisciplinas[i].vagasTotal - listaDisciplinas[i].qtdMatriculados);
    }
}

void listarUmaDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//lista uma disciplina a partir do nome dela
    int sl=0, existe = 1;
    // nao gostei desse codigo, tentar fazer depois sem a funcao strcmp
    for(int i=0;i<qtdDisciplinas;i++){
        if(strcmp(codDisciplina,listaDisciplinas[i].codigo) == 0){
			printf("\nDisciplina: %s | Codigo: %s | Semestre: %d | Vagas Ofertadas: %d | Matriculados: %d | Vagas Disponiveis: %d \n",
				listaDisciplinas[i].nomeDisciplina,
				listaDisciplinas[i].codigo,
				listaDisciplinas[i].semestre,
				listaDisciplinas[i].vagasTotal,
				listaDisciplinas[i].qtdMatriculados,
				listaDisciplinas[i].vagasTotal - listaDisciplinas[i].qtdMatriculados);
            existe = 1;
            break;
        }else{
            existe = 0;
        }
    }

    if(!existe)
        printf("\nDisciplina nao encontrada");
}

int excluirDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
    int j, i;
	for (i = 0; i < qtdDisciplinas; i++){
		if (strcmp(codDisciplina, listaDisciplinas[i].codigo) == 0) { 
			//copia a ultima disciplina do array pra a posicao da excluida
			strcpy(listaDisciplinas[i].nomeDisciplina, listaDisciplinas[qtdDisciplinas - 1].nomeDisciplina);
			strcpy(listaDisciplinas[i].codigo, listaDisciplinas[qtdDisciplinas - 1].codigo);
				
			listaDisciplinas[i].codigoProfessor=listaDisciplinas[qtdDisciplinas - 1].codigoProfessor;
			listaDisciplinas[i].qtdMatriculados=listaDisciplinas[qtdDisciplinas - 1].qtdMatriculados;
			listaDisciplinas[i].vagasTotal=listaDisciplinas[qtdDisciplinas - 1].vagasTotal;
			listaDisciplinas[i].semestre = listaDisciplinas[qtdDisciplinas - 1].semestre;
			for (j = 0; j < sizeTurma; j++)
				listaDisciplinas[i].alunos[j] = listaDisciplinas[qtdDisciplinas - 1].alunos[j];

			//listaDisciplinas[qtdDisciplinas - 1] = NULL; //esvazia a ultima posicao do array
			return SUCESSO;
			}
		}
	
	return FALHA;
}

void atualizarDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//atualizar a disciplina
    for(int i=0;i<qtdDisciplinas;i++){
        if(strcmp(codDisciplina, listaDisciplinas[i].codigo)==0){
            printf("\nInforme o novo nome da disciplina: ");
            fgets(listaDisciplinas[i].nomeDisciplina, sizeName, stdin);
            printf("\nInforme o novo codigo da disciplina: ");
            fgets(listaDisciplinas[i].codigo, sizeCode, stdin);
            printf("\nInforme o novo semestre: ");
            scanf("%d",&listaDisciplinas[i].semestre);
            getchar(); 
            printf("Atualizado");
        }
    }
}

int inserirAlunoDisciplina(int matricula,Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//inserir aluno na disciplina
	int i,j;
	printf("Quantos alunos deseja inserir? ");	
	for (i = 0; i > qtdDisciplinas; i++) {
		if (strcmp(codDisciplina, listaDisciplinas[i].codigo) == 0) {
			if ((listaDisciplinas[i].vagasTotal - listaDisciplinas[i].qtdMatriculados) < 1) { //verifica se a turma esta lotada
				printf("\nNao ha vaga na disciplina.");
                return FALHA;
			}
			else {
				listaDisciplinas[i].alunos[listaDisciplinas[i].qtdMatriculados] = matricula;
				listaDisciplinas[i].qtdMatriculados++;
				printf("\nO aluno foi matriculado com sucesso!");
                return SUCESSO;
			}
		}
	
	}
}

void excluirAlunoDisciplina(Disciplina listaDisciplinas[], char codDisciplina[], char nomeAluno[]){
//exlcuir aluno da disciplina
    int i,j;

   /* for(i=0;i<2;i++){
        if(strcmp(codDisciplina, listaDisciplinas[i])==0){
            for(j=0;j<10;j++){
                if(strcmp(listaDisciplinas[i].alunos[j], nomeAluno) == 0){
                    printf("Excluido");
                }
            }
        }
    }*/
}





main(){ //alterar esse metodo para o metodo cadastro (inserir, excluir, atualizar)
Disciplina disciplina;
Disciplina listaDisciplinas[sizeCode];
int op, ts, existe = 1, retorno;

do{
    printf("\n1 - Inserir");
    printf("\n2 - Excluir");
    printf("\n3 - Atualizar");
    printf("\n4 - Listar");
    printf("\n5 - Listar uma disciplina");
    printf("\n0 - Sair\n");
    scanf("%d",&op);
    getchar();

    switch(op){
        case 1:
            cadastrarDisciplina(listaDisciplinas, sizeCode);
            if(retorno == SUCESSO)
                printf("\nDisciplina cadastrada com sucesso\n");
        break;

        case 2:
            printf("\nInforme o codigo da disciplina para excluir: ");
            excluirDisciplina(listaDisciplinas, sizeCode, fgets(disciplina.codigo,10,stdin));

        break;

        case 3:
            printf("Informe o codigo da disciplina: ");
            atualizarDisciplina(listaDisciplinas, sizeCode, fgets(disciplina.codigo, 10, stdin));      
        break;

        case 4:
            listarDisciplinas(listaDisciplinas, sizeCode);
        break;

        case 5:
            printf("Informe o codigo da disciplina: ");
            listarUmaDisciplina(listaDisciplinas, sizeCode, fgets(disciplina.codigo, 10, stdin));
        break;

        case 0:
        break;
    }
}while(op!=0);

}