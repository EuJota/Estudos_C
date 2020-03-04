#include <stdio.h>
#include <stdlib.h>

//lista sem cabeça

typedef struct{
    int valor;
    struct Lista *prox;
    struct Lista *ant;
} Lista;

Lista *criarLista(){
    Lista *l = NULL;

    //l->prox = NULL;
    //l->ant = NULL;

    return l;
}

Lista *inserirLista(Lista *l, int valor){
    Lista *novo = (Lista*) malloc(sizeof(Lista*));
    
    novo->valor = valor;

    if(l == NULL){
        novo->prox = NULL;
        novo->ant = NULL;
    }else{
        novo->prox = l;
        novo->ant = NULL;
        l->ant = novo;
    }
   
    l = novo;

    return l;
}

void imprimeLista(Lista *l){
    Lista *p;
    p = l;

    if(p==NULL)
        printf("Lista vazia");

    while (p!=NULL){
        printf("-> %d ",p->valor);
        p = p->prox;
    }
}

//ordenar lista

//contar lista

//removerItemLista

void liberarLista(Lista *l){
    free(l);
}

main(){
    Lista *l;
    int valor, i;

    l = criarLista();

    for(i=0;i<10;i++){
        scanf("%d",&valor);
        l = inserirLista(l, valor);
    }

    imprimeLista(l);

    liberarLista(l);
}