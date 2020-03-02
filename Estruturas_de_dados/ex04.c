#include <stdio.h>
#include <stdlib.h>

void insereValor(int *pos, int valor, int *v){
    int j;
    // cada posicao do vetor inicial é na verdade um ponteiro para o novo vetor indicado naquela
    //posicao
    //como resolver: o usuario vai indicar a posição, que vai ser o endereço do vetor
    //o vetor naquele endereço vai ser incrementado com o valor e seu cont de posicoes vai incrementar
    //a funcao aloca precisa verificar se o endereco indicado já foi alocado anteriormente
    v[*pos] = valor;

    *pos +=1;

}

void alocaPosicao(int n, int i, int *v){
    v[i] = (int*) malloc(n*sizeof(int*));
    if(!v[i]){
        printf("Memoria cheia");
        exit;
    }
}

main(){
    int vetor[10];
    int i, n;

    
}