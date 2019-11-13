#include<stdio.h>
#include<string.h>
#include "professor.h"
#include "aluno.h"
#define size 2
#define SUCESSO 1

typedef struct disciplina{
    char nomeDisciplina[25];
    int codigo[size];
    int semestre;
    char professor[50];
    //alunos
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
    //melhorar o algoritmo inserindo uma busca na lista para saber se já existe o codigo
    //chamar o algoritmo de lista disciplina
    for (int i = 0; i < qtdDisciplinas; i++){
        printf("\nInforme o nome da disciplina: ");
        fgets(listaDisciplinas[i].nomeDisciplina, 25, stdin);
        printf("\nInforme o codigo da disciplina: ");
        fgets(listaDisciplinas[i].codigo, 10, stdin);
        printf("\nInforme o semestre: ");
        scanf("%d", &listaDisciplinas[i].semestre);
        getchar();
    }
    return SUCESSO;
}

void listarDisciplinas(Disciplina listaDisciplinas[], int qtdDisciplinas){
//lista todas as disciplinas
    for(int i =0; i<qtdDisciplinas;i++){
        printf("Disciplina: %s | Codigo: %s | Semestre: %d\n",
        listaDisciplinas[i].nomeDisciplina,
        listaDisciplinas[i].codigo,
        listaDisciplinas[i].semestre);
    }
}

void listarUmaDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//lista uma disciplina a partir do nome dela
    int sl=0, existe = 1;
    // nao gostei desse codigo, tentar fazer depois sem a funcao strcmp
    for(int i=0;i<qtdDisciplinas;i++){
        if(strcmp(codDisciplina,listaDisciplinas[i].codigo) == 0){
            printf("Disciplina: %s | Codigo: %s |  Semestre: %d",
            listaDisciplinas[i].nomeDisciplina, 
            listaDisciplinas[i].codigo,
            listaDisciplinas[i].semestre);
            existe = 1;
            break;
        }else{
            existe = 0;
        }
    }

    if(!existe)
        printf("Disciplina nao encontrada");
}

void excluirDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//função ainda nao pronto, falta excluir a disciplina
    int caso = validadorDisciplina(listaDisciplinas, qtdDisciplinas, codDisciplina);
    
    if(caso==1){
        //excluir
    }
}

void atualizarDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//atualizar a disciplina
    for(int i=0;i<qtdDisciplinas;i++){
        if(strcmp(codDisciplina, listaDisciplinas[i].codigo)==0){
            printf("\nInforme o novo nome da disciplina: ");
            fgets(listaDisciplinas[i].nomeDisciplina, 25, stdin);
            printf("\nInforme o novo codigo da disciplina: ");
            fgets(listaDisciplinas[i].codigo, 10, stdin);
            printf("\nInforme o novo semestre: ");
            scanf("%d",&listaDisciplinas[i].semestre);
            getchar();
            printf("Atualizado");
        }
    }
}

int inserirAlunoDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
//inserir aluno na disciplina
    int numAlunos, j;

    printf("Quantos alunos deseja inserir? ");
    scanf("%d", &numAlunos);

    for (j = 0; j < numAlunos; j++)
    {
        printf("Informe o nome do aluno: ");
        //fgets(listaDisciplinas[i].alunos[j],50, stdin);
        //chamar uma função que verifica se existe a disciplina a partir do código e que ela retorne a posição que se
        //encontra no vetor
        //chamar a função de existe aluno pra verificar se o aluno já existe no vetor de alunos
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
Disciplina listaDisciplinas[size];
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
            cadastrarDisciplina(listaDisciplinas, size);
            if(retorno == SUCESSO)
                printf("\nDisciplina cadastrada com sucesso\n");
        break;

        case 2:
            printf("\nInforme o codigo da disciplina para excluir: ");
            excluirDisciplina(listaDisciplinas, size, fgets(disciplina.codigo,10,stdin));

        break;

        case 3:
            printf("Informe o codigo da disciplina: ");
            atualizarDisciplina(listaDisciplinas, size, fgets(disciplina.codigo, 10, stdin));      
        break;

        case 4:
            listarDisciplinas(listaDisciplinas, size);
        break;

        case 5:
            printf("Informe o codigo da disciplina: ");
            listarUmaDisciplina(listaDisciplinas, size, fgets(disciplina.codigo, 10, stdin));
        break;

        case 0:
        break;
    }
}while(op!=0);

}