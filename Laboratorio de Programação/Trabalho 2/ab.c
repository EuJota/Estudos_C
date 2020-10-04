#include<stdio.h>

int main(){
    int *cont;
    int conta = 10;
    int *aux = &conta;

    cont = conta;

    printf("%d", cont);


    return 0;
}