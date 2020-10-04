#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// adicionar, remover, buscar
// PASSAR COMO PARAMETRO SEMPRE O CABEÇALHO DA LISTA

//Nome; Tamanho do cabo ; Peso ; Grau de conectividade; ptr proximo
typedef struct cabo{
    int nome, peso, gc;
    float tamanho;
    struct cabo *prox;
} Cabo;

Cabo *inicializa();
void imprimir();
void adicionaCabo();
Cabo *buscaCabo();


int main(){
    Cabo *cabo;
    int posicao = 0;
    int a = 0;
    
    cabo = inicializa(cabo);

    while(a<3){
        adicionaCabo(cabo, a);
        a++;
    }
    imprimir(cabo);
    buscaCabo(cabo, 14);

    return 0;
}

Cabo *inicializa(Cabo *cabecote) {
    if(!cabecote)
        cabecote = malloc(sizeof(Cabo));
    
    cabecote->prox = NULL;
    return cabecote;
}

void adicionaCabo(Cabo *cabecote, int posicao){
    if(cabecote != NULL ){
        int i = 0, j = 0;
        Cabo *novoCabo = malloc(sizeof(Cabo));
        Cabo *aux = cabecote;
        while (aux != NULL || i<= posicao){
            if(i==posicao){
                Cabo *temporario = aux->prox;
                scanf("%d",&j);
                novoCabo->nome = j;
                aux->prox = novoCabo;
                novoCabo->prox = temporario;
                break;
            }
            aux = aux->prox;
            i++;
        }
        //tratamento de posicao inexistente na lista
    }else printf("Lista nao existe!!");
}

void removeCabo(){

}

//buscaCabo ptr porque vou usar a mesma funcao em remover, ai já retorno 
//o ponteiro pra remover lá na funcao
Cabo *buscaCabo(Cabo *cabecote, int nomeCabo){
    if(cabecote != NULL){
        Cabo *aux = cabecote;
        bool encontrado = false;
        
        while (aux != NULL){
            if(aux->nome == nomeCabo){
                encontrado = true;
                printf("Encontrado!!\n");
                return aux;
            }
            aux = aux->prox;
        }
        
        if(!encontrado) printf("Não encontrado!!\n");
    }else printf("Lista vazia\n");
    return NULL;
}

void imprimir(Cabo *cabecote){
    Cabo *p;
    for (p = cabecote->prox; p != NULL; p = p->prox)
        printf ("%d\n", p->nome);
}
