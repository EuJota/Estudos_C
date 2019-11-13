#include <stdio.h>
#include <string.h>
#include "disciplina.h"
#include "professor.h"
#include "aluno.h"

void chamarMetodos(){
    int op, i;

    do{
        printf("\n1- Listar alunos");
        printf("\n2- Listar professores");
        printf("\n3- Listar disciplinas");
        printf("\n4- Listar uma disciplina");
        printf("\n5- Listar alunos por sexo");
        printf("\n6- Listar alunos ordenados por nome");
        printf("\n7- Listar alunos ordenados por data nascimento");
        printf("\n8- Listar professores por sexo");
        printf("\n9- Listar professores por nome");
        printf("\n10- Listar professores por data nascimento");
        printf("\n11- Aniversariante do mês");
        printf("\n12- Lista de busca");
        printf("\n13- Sair");

        scanf("%d",&op);
        getchar();

    switch (op){

    case  1:
        break;
    case  2:
        break;
    case  3:
        break;
    case  4:
        listarUmaDisciplina();
        break;
    case  5:
        break;
    case  6:
        break;
    case  7:
        break;
    case  8:
        break;
    case  9:
        break;
    case  10:
        break;
    case  11:
        break;
    case  12:
        break;
    case  13:
        break;
    
    default:
        break;
    }
    }while(op!=0);
}