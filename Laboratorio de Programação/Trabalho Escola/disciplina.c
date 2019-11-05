#include<stdio.h>
#include<string.h>
#define size 2

typedef struct disciplina{
    char nomeDisciplina[25];
    int codigo[size];
    int semestre;
    //Professor professor
} Disciplina;

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

    for(int i=0;i<qtdDisciplinas; i++){
        for(int j=0;j<sl;j++){
            printf("i: %c | j: %c\n",codDisciplina[i],listaDisciplinas[i].codigo[j]);
            /*if(codDisciplina[j] == listaDisciplinas[j].codigo){
                
                //existe = 0;
                //break;
            }*/
        }
        /*if(existe){
            printf("Disciplina: %s | Codigo: %s | Semestre: %d | ",
            listaDisciplinas[i].nomeDisciplina,
            listaDisciplinas[i].codigo,
            listaDisciplinas[i].semestre);
        }*/
    }

    if(!existe)
        printf("Disciplina nao encontrada");
    
}

main(){ //alterar esse metodo para o metodo cadastro (inserir, excluir, atualizar)
Disciplina disciplina;
Disciplina listaDisciplinas[size];
int op, ts, existe = 1 ;

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
            for(int i=0;i<size;i++){
                printf("\nInforme o nome da disciplina: ");
                fgets(listaDisciplinas[i].nomeDisciplina, 25, stdin);
                printf("\nInforme o codigo da disciplina: ");
                fgets(listaDisciplinas[i].codigo, 10, stdin);
                printf("\nInforme o semestre: ");
                scanf("%d",&listaDisciplinas[i].semestre);
                getchar();
            }
        break;

        case 2:
            printf("\nInforme o codigo da disciplina para excluir: ");
            fgets(disciplina.codigo,10,stdin);

        break;

        case 3:
            printf("Informe o codigo da disciplina: ");
            fgets(disciplina.codigo, 10, stdin);
            ts = strlen(disciplina.codigo);
            for(int i=0;i<size;i++){
                for(int j=0;j<ts;j++){
                    if(disciplina.codigo[j]!=listaDisciplinas[j].codigo){
                        existe = 0;
                        break;
                    }
                }
                if(existe==1){
                    printf("atualize as informacoes de %s",listaDisciplinas[i].nomeDisciplina);
                    printf("\nInforme o nome da disciplina: ");
                    fgets(listaDisciplinas[i].nomeDisciplina, 25, stdin);
                    printf("\nInforme o codigo: ");
                    fgets(listaDisciplinas[i].codigo, 10, stdin);
                    printf("\nInforme o semestre: ");
                    scanf("%d",&listaDisciplinas[i].semestre);
                    break;
                }
                    
            }
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