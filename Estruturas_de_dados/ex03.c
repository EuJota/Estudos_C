#include <stdio.h>
#include <stdlib.h>

main(){
    int n, *v;

    printf("Informe a quantidade de posicoes que deseja alocar: ");
    scanf("%d",&n);

    v = (int *) malloc(n*sizeof(int*));

    if(!v){
        printf("Sem memoria");
        exit;
    }

    printf("Espaco reservado\n");
    free(v);
}