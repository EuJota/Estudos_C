#include <stdio.h>
#include <stdlib.h>

typedef struct no{
    int valor;
    struct no *prox;
} No;

No *inserirNaLista(No *inicio, int valor){
    No *novo = NULL;
    No *aux = NULL;

    if(inicio->prox == NULL){
        novo = (No*) malloc(sizeof(No*));
        novo->prox = NULL;
        novo->valor = valor;
    }else{
        aux = inicio;
        novo = (No*) malloc(sizeof(No*));
        while (aux->prox != NULL)
            aux = aux->prox;

        novo->valor = valor;
        novo->prox = NULL;
        aux->prox = novo;
    }
}

int buscarNaLista(No *inicio, int valor){
    No *aux = NULL;
    int encontrou = 0;

    if(inicio->prox != NULL){
        aux = inicio;
        while (aux != NULL){
            if(aux->valor == valor){
                encontrou = 1;
                printf("Encontrou o valor %d\n",valor);
                return aux->valor;
            }
            aux = aux->prox;
        }

        if(encontrou == 0 ){    
            printf("Nao encontrou\n"); 
            return 0;
        }
    }else{
        printf("Lista vazia");
        return 0;
    }
}

void removerDaLista(No *inicio, int valor){
    No *aux = NULL, *atual = NULL;
    int encontrou = 0;

    if(inicio->prox != NULL){
            aux = inicio->prox;
            while (aux != NULL){
                if(aux->valor == valor){
                    encontrou = 1;
                    
                    return aux->valor;
                }
                aux = aux->prox;
            }

            if(encontrou == 0 ){    
                printf("Nao encontrou\n"); 
                return 0;
            }
        }else{
            printf("Lista vazia");
            return 0;
        }
    

}