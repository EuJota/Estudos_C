#include <stdio.h>
#include <stdlib.h>

//MELHORAR ESSE ALGORITMO PARA QUE A FUNÇÃO DE BUSCA POSSA SER UTILIZADA NA FUNÇÃO DE INSERIR PARA 
//REDUZIR A ESCRITA DO CÓDIGO

typedef struct no{
    int valor;
    struct no *ant;
    struct no *prox;
} No;

int buscarElementoNaLista(No *inicio, int elemento){
    No *aux = NULL;
    int encontrou = 0;

    if(inicio != NULL){
        aux = inicio;
        while (aux != NULL){
            if(aux->valor == elemento){
                encontrou = 1;
                printf("Encontrou o valor %d\n",elemento);
                return elemento;
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

No *inserirNaLista(No *inicio, int valor){
    No *novo = NULL;
    No *aux = NULL, *noAux = NULL;

    if(inicio == NULL) { 
        inicio = (No*) malloc(sizeof(No*));
        inicio->prox = NULL;
        inicio->valor = valor;
        inicio->ant = NULL;
    }else{
        novo = (No*) malloc(sizeof(No*));
        if(valor < inicio->valor){
            novo->valor = valor;
            novo->ant = NULL;
            novo->prox = inicio;
            inicio->ant = novo;
            inicio = novo;
        }else{
            aux = inicio;
            while(valor > aux->valor && aux->prox !=NULL)
                aux = aux->prox;

            if(aux->prox == NULL){
                novo->valor = valor;
                novo->prox = NULL;
                novo->ant = aux;
                aux->prox = novo;
            }else{
                noAux = aux->ant;
                novo->valor = valor;
                novo->ant = noAux;
                novo->prox = aux;
                noAux->prox = novo;
                aux->ant = novo;
            }        
        }
    }
    
    return inicio;
}

int main(){
    int i;
    No *inicio = NULL;
    //No *aux = NULL, *aux2 = NULL, *aux3 = NULL;

    
    // inicio = inserirNaLista(inicio, 23);
    // inicio = inserirNaLista(inicio, 24);
    // inicio = inserirNaLista(inicio, 21);
    // inicio = inserirNaLista(inicio, 22);
    

    // aux = inicio->prox;
    // aux2 = aux->prox;
    // aux3 = aux2->prox;

    // printf("%d\n",inicio->valor);
    // printf("%d\n",aux->valor);
    // printf("%d\n",aux2->valor);
    // printf("%d\n",aux3->valor);

    // buscarElementoNaLista(inicio, 23);

    return 0;
}