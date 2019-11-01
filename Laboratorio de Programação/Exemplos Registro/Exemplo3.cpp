#include <stdio.h>
#include <string.h>
#include<stdlib.h>

typedef struct stPessoa{
    int id;
    char nome[50];
    char sexo;
} Pessoa;

main(){
    int cont=0;
    Pessoa pessoa[10]; //poderia trocar o valor inserido por uma variável pre definida

    while(cont<2){
        printf("Cadastre a pessoa %d",cont);
        printf("\nInforme o nome: ");
        gets(pessoa[cont].nome);
        printf("Informe o sexo: ");
        scanf(" %c",&pessoa[cont].sexo);
        pessoa[cont].id = cont;
        cont++;
        getchar(); //para corrigir o buffer
    }
    cont = 0;

    while(cont<2){
        printf("Pessoa %d: %s, %c, %d\n", cont, pessoa[cont].nome, pessoa[cont].sexo, pessoa[cont].id);
        cont++;
    }
}
