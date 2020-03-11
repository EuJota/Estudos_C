#include <stdio.h>
#include <stdlib.h>
#define TAM 10
#include "EstruturaVetores.h"

// typedef struct{
// 	int conteudo;
//     struct No *prox;
// } No;

typedef struct{
    int *listaAuxiliar;
    int *cont, *tamanho; 
} ListaAux;

ListaAux vetorPrincipal[TAM];

void inicializar(){ //OK
    int i;
    ListaAux vetor[TAM];
    for(i=0;i<TAM;i++){
        vetor[i].listaAuxiliar = NULL;
        vetor[i].tamanho = 0;
        vetor[i].cont = 0;
    }
}

int ehPosicaoValida(int posicao){
    int retorno = 0;
    if (posicao < 1 || posicao > 10){
        retorno = POSICAO_INVALIDA;
    }else retorno = SUCESSO;

    return retorno;
}

int verificarEstruturaAuxiliar(int posicao){
    int retorno;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal[posicao];

    if(ptrListaPrincipal->listaAuxiliar != NULL)
            return JA_TEM_ESTRUTURA_AUXILIAR;    
    else
        return SEM_ESTRUTURA_AUXILIAR;
}

int verificaEstrutura(int tamanho, ListaAux *ptrLista){
    int i;

    if(ptrLista->listaAuxiliar == NULL){
        ptrLista->listaAuxiliar = (int *) malloc(tamanho * sizeof(int *));
        if(ptrLista->listaAuxiliar == NULL)
            return SEM_ESPACO_DE_MEMORIA;
        else{
            ptrLista->cont = 0;
            ptrLista->tamanho = tamanho;
            return SUCESSO;
        }    
    }else{
        return JA_TEM_ESTRUTURA_AUXILIAR;
    }
}

int criarEstruturaAuxiliar(int tamanho, int posicao){
    int verificaE, retorno = 0;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal[posicao]; //FAZER PONTEIRO APONTAR PARA O ENDEREÇO DA POSICAO DO VETOR QUE EU QUERO ACESSAR
    
    if(ehPosicaoValida(posicao) == SUCESSO)
        if(tamanho>0)
            verificaE = verificaEstrutura(tamanho, ptrListaPrincipal);
        else
            return TAMANHO_INVALIDO; //TESTAR  
    else{
        return POSICAO_INVALIDA;
    }
        

    if(verificaE == SUCESSO)
        retorno = SUCESSO;
    else if(verificaE == JA_TEM_ESTRUTURA_AUXILIAR)
        retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    else
        retorno = SEM_ESPACO_DE_MEMORIA;

    // a posicao pode já existir estrutura auxiliar
    //retorno = JA_TEM_ESTRUTURA_AUXILIAR;
    // se posição é um valor válido {entre 1 e 10}
    //retorno = POSICAO_INVALIDA;
    // o tamanho ser muito grande
    //retorno = SEM_ESPACO_DE_MEMORIA;
    // o tamanho nao pode ser menor que 1
    //retorno = TAMANHO_INVALIDO;
    // deu tudo certo, crie
    //retorno = SUCESSO;

    return retorno;

}

int getQuantidadeElementosEstruturaAuxiliar(int posicao){

    int contador, retorno;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal[posicao];

    if(ehPosicaoValida(posicao) == SUCESSO)
        if(verificarEstruturaAuxiliar(posicao) == JA_TEM_ESTRUTURA_AUXILIAR)
            if(ptrListaPrincipal->cont > 0)
                retorno = ptrListaPrincipal->cont;
            else
                return ESTRUTURA_AUXILIAR_VAZIA;
        else
            retorno = SEM_ESTRUTURA_AUXILIAR;
    else
        retorno = POSICAO_INVALIDA;

    return retorno;
}

int verificarTamanhoEstruturaAuxiliar(int posicao){
    int tamanho, tamanhoEstrutura, contador;

    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal[posicao];

    contador = getQuantidadeElementosEstruturaAuxiliar(posicao);
    
    tamanho = ptrListaPrincipal->tamanho;
    tamanhoEstrutura = tamanho - contador;

    if(tamanhoEstrutura>0)
        return SUCESSO;
    else
        return SEM_ESPACO;
}

int inserirNumeroEmEstrutura(int valor, int posicao){

    int retorno = 0;
    int existeEstruturaAuxiliar = 0;
    int temEspaco = 0;
    int posicao_invalida = 0;
    int sContador = 1, ptrContador, soma;

    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal[posicao];
    ptrContador = ptrListaPrincipal->cont;

    posicao_invalida = ehPosicaoValida(posicao);
    existeEstruturaAuxiliar = verificarEstruturaAuxiliar(posicao);
    temEspaco = verificarTamanhoEstruturaAuxiliar(posicao);

    soma = ptrContador + sContador;

    if (posicao_invalida != SUCESSO)
        retorno = POSICAO_INVALIDA;
    else{
        // testar se existe a estrutura auxiliar
        if (existeEstruturaAuxiliar == JA_TEM_ESTRUTURA_AUXILIAR){
          if (temEspaco == SUCESSO){
              ptrListaPrincipal->listaAuxiliar[ptrContador] = valor;
              ptrListaPrincipal->cont = soma;
              retorno = SUCESSO;
          }else{
              retorno = SEM_ESPACO;
          }
        }else{
          retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    }

    return retorno;
}

void selectionSort(int lista[], int n){
    int i, j, troca, menor;

    for(i=0;i<n;i++){
        menor = i;
        for(j=i+1;j<n;j++)
            if(lista[j]<lista[menor])
                menor = j;

        if(menor != i){
            troca = lista[i];
            lista[i] = lista[menor];
            lista[menor] = troca;
        }
    }

    printf("Pegando lista auxiliar ordenada: ");
    for(i=0;i<n;i++)
        printf("%d ",lista[i]);
}

int getDadosEstruturaAuxiliar(int posicao, int vetorAux[]){

    int retorno = 0, j, tj;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal;

    if(ehPosicaoValida(posicao) == SUCESSO)
        if(verificarEstruturaAuxiliar(posicao) == JA_TEM_ESTRUTURA_AUXILIAR){
            tj = ptrListaPrincipal[posicao].tamanho;
            vetorAux[tj];

            for(j=0;j<tj;j++)
                vetorAux[j] = ptrListaPrincipal[posicao].listaAuxiliar[j]; 
            
            for(j=0;j<tj;j++)
                printf("%d =>",vetorAux[j]);
            retorno = SUCESSO;
        }else{
            retorno = SEM_ESTRUTURA_AUXILIAR;
        }
    else
        retorno = POSICAO_INVALIDA;

    return retorno;
}

int getDadosDeTodasEstruturasAuxiliares(int vetorAux[]){

    int retorno = 0, i, j, tj;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal;

    for(i=0;i<10;i++){
        tj = ptrListaPrincipal[i].tamanho;
        printf("\nPosicao %d: Lista Auxiliar de tamanho: %d",(i+1), tj);
        if(tj>0)
            printf("\t--- Lista: ");
        for(j=0; j<tj;j++){
            printf("%d => ",ptrListaPrincipal[i].listaAuxiliar[j]);
        }
    }

    return retorno;

}

int getDadosOrdenadosEstruturaAuxiliar(int posicao, int vetorAux[]){
    int retorno = 0, j, tj;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal;

    if(ehPosicaoValida(posicao) == SUCESSO)
        if(verificarEstruturaAuxiliar(posicao) == SUCESSO){
            tj = ptrListaPrincipal[posicao].tamanho;
            vetorAux[tj];

            for(j=0;j<tj;j++)
                vetorAux[j] = ptrListaPrincipal[posicao].listaAuxiliar[j]; 

            selectionSort(vetorAux, tj);
            retorno = SUCESSO;
        }else
            retorno = SEM_ESTRUTURA_AUXILIAR;
    else
        retorno = POSICAO_INVALIDA;

    return retorno;
}

int getDadosOrdenadosDeTodasEstruturasAuxiliares(int vetorAux[]){

    //PARA OTIMIZAR EU POSSO BUSCAR APENAS OS VETORES QUE TEM LISTA AUXILIAR DEFINIDA

    int retorno = 0, contadorGeral = 0, i, x=0, j, k, tamanhoListasAuxiliares;
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal;

    for(i=0; i<10;i++)
        contadorGeral += getQuantidadeElementosEstruturaAuxiliar(i);
    
    vetorAux[contadorGeral]; //É O MESMO QUE DAR UM MALLOC?

    for(k=0;k<10;k++)
        for(j=0;j<getQuantidadeElementosEstruturaAuxiliar(k);j++)
            for(i=x;i<contadorGeral;i++){
                vetorAux[i] = ptrListaPrincipal[k].listaAuxiliar[j];
                x++;
                break;
            }
    selectionSort(vetorAux, contadorGeral);

    return retorno;
}

void ordenarEstruturaAuxiliarPosRemocao(int posicaoPrincipal, int posicaoAuxiliar){
    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal;
    int i;

    for(i=posicaoAuxiliar;i<ptrListaPrincipal[posicaoPrincipal].tamanho;i++){
        ptrListaPrincipal[posicaoPrincipal].listaAuxiliar[i] = ptrListaPrincipal[posicaoPrincipal].listaAuxiliar[i+1];
    }
}

int excluirNumeroEspecificoDeEstrutura(int valor, int posicao){
  int retorno = SUCESSO;
  int i, encontrado = 0, subtracao = 0;

  ListaAux *ptrListaPrincipal = NULL;
  ptrListaPrincipal = &vetorPrincipal;

  while (i<ptrListaPrincipal->tamanho && encontrado == 0){
      if(ptrListaPrincipal[posicao].listaAuxiliar[i] == valor){
          encontrado = 1;
          ptrListaPrincipal->cont = (subtracao - encontrado);
          ordenarEstruturaAuxiliarPosRemocao(posicao,i);
          break;
      }else{
          encontrado = 0;
          i++;
      }
  }
  
  return retorno;
}

int modificarTamanhoEstruturaAuxiliar(int posicao, int novoTamanho){
    int retorno = 0;

    ListaAux *ptrListaPrincipal = NULL;
    ptrListaPrincipal = &vetorPrincipal;

    if(ehPosicaoValida(posicao) == SUCESSO)
        if(novoTamanho > ptrListaPrincipal[posicao].tamanho){
            if(ptrListaPrincipal[posicao].listaAuxiliar == NULL){
                retorno = SEM_ESTRUTURA_AUXILIAR;
            }else{
                novoTamanho = ptrListaPrincipal[posicao].tamanho + novoTamanho;
                ptrListaPrincipal[posicao].listaAuxiliar = realloc(ptrListaPrincipal[posicao].listaAuxiliar , sizeof(int *)*novoTamanho);
                if(ptrListaPrincipal[posicao].listaAuxiliar == NULL)
                    retorno = SEM_ESPACO_DE_MEMORIA;
                else{
                    ptrListaPrincipal[posicao].tamanho = novoTamanho;
                    retorno = SUCESSO;
                }        
            }
        }else{
            retorno = NOVO_TAMANHO_INVALIDO;
        }
    else
        return POSICAO_INVALIDA;

    return retorno;
}

int  excluirNumeroDoFinaldaEstrutura(int posicao){
  int retorno = SUCESSO;
  int i, encontrado = 0, subtracao = 1, contatual = 0;

  ListaAux *ptrListaPrincipal = NULL;
  ptrListaPrincipal = &vetorPrincipal;

  contatual = ptrListaPrincipal[posicao].cont;
  
  if(ehPosicaoValida(posicao) == SUCESSO)
    if(verificarEstruturaAuxiliar(posicao) == JA_TEM_ESTRUTURA_AUXILIAR){
        if(getQuantidadeElementosEstruturaAuxiliar(posicao) >= 0){
            ptrListaPrincipal[posicao].cont = contatual - subtracao;
            retorno = SUCESSO;
        }else
            return ESTRUTURA_AUXILIAR_VAZIA;
    }else
        retorno = SEM_ESTRUTURA_AUXILIAR;
  else
    retorno = POSICAO_INVALIDA;
      
  
  return retorno;
}

main(){
    int tamanho, posicao, retorno, i,j;
    int vetAux[0];

    inicializar();

    printf("%d\n",criarEstruturaAuxiliar(5, -2) == POSICAO_INVALIDA);
    printf("%d\n",criarEstruturaAuxiliar(5, 0) == POSICAO_INVALIDA);
    printf("%d\n",criarEstruturaAuxiliar(5, 11) == POSICAO_INVALIDA);
    printf("%d\n",criarEstruturaAuxiliar(-5, 2) == TAMANHO_INVALIDO);
    printf("%d\n",criarEstruturaAuxiliar(0, 2) == TAMANHO_INVALIDO);
    printf("%d\n",criarEstruturaAuxiliar(3, 2) == SUCESSO);
    printf("%d\n",criarEstruturaAuxiliar(6, 2) == JA_TEM_ESTRUTURA_AUXILIAR);

    printf("%d\n",inserirNumeroEmEstrutura(4, 2) == SUCESSO);
    printf("%d\n",inserirNumeroEmEstrutura(-2, 2) == SUCESSO);
    printf("%d\n",inserirNumeroEmEstrutura(6, 2) == SUCESSO);
    printf("%d\n",inserirNumeroEmEstrutura(5, 2) == SEM_ESPACO);

    printf("%d\n",excluirNumeroDoFinaldaEstrutura(2) == SUCESSO);
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(2) == SUCESSO);
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(0) == POSICAO_INVALIDA);
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(1) == SEM_ESTRUTURA_AUXILIAR);
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(2) == SUCESSO);
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(2) == ESTRUTURA_AUXILIAR_VAZIA);

    printf("%d\n",inserirNumeroEmEstrutura(7, 2) == SUCESSO);
    printf("%d\n",inserirNumeroEmEstrutura(-9, 2) == SUCESSO);
    
    int vet[2];

    printf("%d\n",getDadosEstruturaAuxiliar(1, vet) == SEM_ESTRUTURA_AUXILIAR);
    printf("%d\n",getDadosEstruturaAuxiliar(11, vet) == POSICAO_INVALIDA);
    printf("%d\n",getDadosEstruturaAuxiliar(2, vet) == SUCESSO);

    printf("%d\n",vet[0] == 7);
    printf("%d\n",vet[1] == -9);

    printf("%d\n",getDadosOrdenadosEstruturaAuxiliar(1, vet) == SEM_ESTRUTURA_AUXILIAR);
    printf("%d\n",getDadosOrdenadosEstruturaAuxiliar(11, vet) == POSICAO_INVALIDA);
    printf("%d\n",getDadosOrdenadosEstruturaAuxiliar(2, vet) == SUCESSO);

    printf("%d\n",vet[0] == -9);
    printf("%d\n",vet[1] == 7);

    printf("%d\n",getDadosEstruturaAuxiliar(2, vet) == SUCESSO);

    printf("%d\n",vet[0] == 7);
    printf("%d\n",vet[1] == -9);
    
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(2) == SUCESSO);
    printf("%d\n",excluirNumeroDoFinaldaEstrutura(2) == SUCESSO);
}