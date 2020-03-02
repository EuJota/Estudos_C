#include <stdio.h>
#include <stdlib.h>


void inserirPilhaPar(int *v, int n, int *qtd){
    
    printf("->%d\n",*qtd);
    v[*qtd] = n;
    *qtd +=1;
    
    printf("\nInserido\n");
}

void inserirPilhaImpar(int *v, int n, int *qtd){
    
    v[*qtd] = n;
    *qtd+=1;
    
    printf("\nInserido\n");
}

void listarElementos(int *v1, int *v2, int *q1, int *q2){
    int i;
    if(*q1 == 0)
        printf("Vazio\n");
    else
        for(i=0;i<*q1;i++)
            printf("%d ->",v1[i]);

    printf("\n");
    if(*q2 == 0)
        printf("Vazio\n");
    else
        for(i=0;i<*q2;i++)
            printf("%d ->",v2[i]);

    printf("\n");
}

void removerPar(int *qtd){
    if(*qtd > 0)
        *qtd = -1;
    else
        printf("Lista Vazia");
}

void removerImpar(int *qtd){
    if(*qtd > 0)
        *qtd = -1;
    else
        printf("Lista Vazia");
}

main(){
    int op, n, rm, nPar = 0, nImpar = 0;
    int vet1[nPar], vet2[nImpar];
    int *ptrVet1, *ptrVet2, *nP, *nI;

    ptrVet1 = vet1;
    ptrVet2 = vet2;

    nP = &nPar;
    nI = &nImpar;

    do{
        printf("\n1-Inserir\n2-Listar\n3-Remover\n");
        scanf("%d",&op);

        switch(op){
            case 1:
                printf("Informe o valor a ser inserido: ");
                scanf("%d",&n);
                if(n%2==0)
                    inserirPilhaPar(ptrVet1, n, nP);
                else
                    inserirPilhaImpar(ptrVet2, n, nI);

                break;

            case 2:
                listarElementos(ptrVet1, ptrVet2, nP, nI);
                break;

            case 3:
                printf("Remover da lista par: 1\t\t Remover da lista impar: 2\n");
                scanf("%d",&rm);
                if(rm==1)
                    removerPar(nP);
                else
                    removerImpar(nI);

                break;

            default:
                printf("Saindo...");
                break;
        }
    }while(op!=0);
}