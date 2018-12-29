#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetor[100];
    int i;

    printf("\nVetor com os 100 primeiros numeros impares\n");

    //Declarando valores impares
    for (i=0;i<100;i++){
        vetor[i]=2*i+1;
    }

    printf("\n\n");

    //Imprimindo valores do vetor
    for (i=0;i<100;i++){
       printf("%d\t", vetor[i]);
    }

    printf("\n\n");
return 0;
}
