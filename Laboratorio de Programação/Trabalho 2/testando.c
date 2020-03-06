#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#define SUCESSO -1
#define SEM_ESPACO -2
#define SEM_ESTRUTURA_AUXILIAR -3
#define JA_TEM_ESTRUTURA_AUXILIAR -4
#define POSICAO_INVALIDA -5
#define SEM_ESPACO_DE_MEMORIA -6
#define TAMANHO_INVALIDO -7
#define ESTRUTURA_AUXILIAR_VAZIA -8
#define NUMERO_INEXISTENTE -9
#define NOVO_TAMANHO_INVALIDO -10

typedef struct{
	int conteudo;
    struct No *prox;
} No;

int vetorPrincipal[TAM];

int verificaEstrutura(int *ptrLista){
    No *lista = NULL;

    lista->conteudo = ptrLista;
    
}

int ehPosicaoValida(int posicao){
    int retorno = 0;
    if (posicao < 1 || posicao > 10){
        retorno = POSICAO_INVALIDA;
    }else retorno = SUCESSO;

    return retorno;

}

int criarEstruturaAuxiliar(int tamanho, int posicao){
    int verificaE = -5, retorno = 0;

    //-5 para falso -1 para true
    if(ehPosicaoValida(posicao) == SUCESSO)
        verificaE = verificaEstrutura(vetorPrincipal[posicao]);
    else
        retorno = POSICAO_INVALIDA;



    
    // a posicao pode já existir estrutura auxiliar
    retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    // se posição é um valor válido {entre 1 e 10}
    retorno = POSICAO_INVALIDA;
    // o tamanho ser muito grande
    retorno = SEM_ESPACO_DE_MEMORIA;
    // o tamanho nao pode ser menor que 1
    retorno = TAMANHO_INVALIDO;
    // deu tudo certo, crie
    retorno = SUCESSO;

    return retorno;

}

main(){
    int tamanho, posicao;

    criarEstruturaAuxiliar(2, 5);
}