#include <stdio.h>
#include <stdlib.h>

int main (){

    int vetor[5];
    int x, i, k=0, posicao=0;

    for (i=0;i<5;i++){
    printf("Digite um valor inteiro para preencher o vetor: ");
    scanf("%d", &vetor[i]);
    }

    printf("\nDigite um valor x a ser lido no vetor: ");
    scanf("%d", &x);

    for (i=0;i<5;i++){
        if (x == vetor[i]){
            k=1;
            posicao=i;
        }
    }

    if (k == 0){
        printf("\nNumero nao encontrado no vetor\n");
    }else
        printf("\nNumero encontrado na posicao %d\n", posicao);

    printf("\n");
return 0;
}

