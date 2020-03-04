#include <stdio.h>
#include <stdlib.h>


typedef struct{
    int valor;
    struct Lista *prox;
} Lista;

Lista *criarLista(){
    Lista *l = NULL;

    return l;
}

void imprimirLista(Lista *l){
    Lista *p = l;
    while (p!= NULL){
        printf("%d->",p->valor);
        p = p->prox;
    }   
}

void liberarLista(Lista *l){
    free(l);
}

Lista *inserirValor(Lista *l, int valor){

    Lista *novo = (Lista *) malloc (sizeof(Lista *));
    
    novo->valor = valor;
    novo->prox = l;

   return novo;
}

void removerDaLista(Lista *l, int valor){
    Lista *aux, *ant;
    aux = l;
    while (aux != NULL && aux->valor !=valor){
        ant = aux;
        aux=aux->prox; 
    }

    if(aux == NULL)
        return l;
    
    if(ant == NULL)
        l = aux->prox;
    else
        ant->prox = aux->prox;

    free(aux);
    return l;
    
}

int contarItensLista(Lista *l){
    Lista *p;
    p = l;
    int i;

    while (p!=NULL){
        i+=1;
        p = p->prox;
    }
    

    return i;
}

Lista *ordenarLista(){
    //ordenar com selection sort
}

main(){
    Lista *lista;
    int valor, i, cont;

    lista = criarLista();
    for(i = 0;i<10;i++){
        scanf("%d",&valor);
        lista = inserirValor(lista, valor);
    }

    imprimirLista(lista);

    cont = contarItensLista(lista);

    printf("\nTamanho da lista: %d", cont);

    scanf("\n\n%d",&valor);
    removerDaLista(lista, valor);

    imprimirLista(lista);

    liberarLista(lista);
}