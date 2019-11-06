#include<stdio.h>
#include<string.h>
#define size 2
#define SUCESSO 1

typedef struct disciplina{
    char nomeDisciplina[25];
    int codigo[size];
    int semestre;
    //Professor professor
} Disciplina;

int cadastrarAluno(Disciplina listaDisciplinas[], int qtdDisciplinas){
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
    for(int i =0; i<qtdDisciplinas;i++){
        printf("Disciplina: %s | Codigo: %s | Semestre: %d\n",
        listaDisciplinas[i].nomeDisciplina,
        listaDisciplinas[i].codigo,
        listaDisciplinas[i].semestre);
    }
}

void listarUmaDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinas, char codDisciplina[]){
    int sl=0, existe = 1;
    sl = strlen(codDisciplina) -1;
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

void excluirDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinsa, char codDisciplina[]){
    //metodo ainda nao pronto, e pode ter um retorn de inteiro
    for(int i=0;i<qtdDisciplinsa;i++){
        if(strcmp(codDisciplina, listaDisciplinas[i].codigo)==0){
            printf("excluido");
        }
    }
}

void atualizarDisciplina(Disciplina listaDisciplinas[], int qtdDisciplinsa, char codDisciplina[]){
//pode mudar o tipo do retorno para int
    for(int i=0;i<qtdDisciplinsa;i++){
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

//inserir aluno na disciplina

//exlcuir aluno da disciplina



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
            cadastrarAluno(listaDisciplinas, size);
            if(retorno == SUCESSO)
                printf("\nAluno Cadastrado com sucesso\n");
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