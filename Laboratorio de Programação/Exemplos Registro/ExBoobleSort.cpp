#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define TAM 10
int main()
{
 setlocale(LC_ALL, "");
 int numeros[TAM] = {1,4,5,2,6,7,3,8,9,0};
 int newlista[TAM];
 int i, aux, contador;

printf("Ordem atual dos itens no array:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", numeros[i]);
}
// Algoritmo de ordenação Bubblesort:
 for (contador = 1; contador < TAM; contador++) {
   for (i = 0; i < TAM - 1; i++) {
     if (numeros[i] > numeros[i + 1]) {
       aux = numeros[i];
       numeros[i] = numeros[i + 1];
       newlista[i] = numeros[i+1];
       newlista[i+1] = aux;
       numeros[i + 1] = aux;
     }
   }
 }
printf("\nElementos do array em ordem crescente:\n");
for (i = 0; i < TAM; i++) {
 printf("%4d", newlista[i]);
}
}
