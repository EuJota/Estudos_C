#include <stdio.h>

typedef struct numeros{
    int numeros[4];
} Numeros;

Numeros ler4numeros(){
    Numeros nums;

    for(int i=0;i<4;i++){
        printf("Informe um valor: ");
        scanf("%d", &nums.numeros[i]);
    }

    return nums;
}

main(){
    ler4numeros();
}