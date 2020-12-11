#include <stdio.h>
#include <stdlib.h>
#define DIM 3

int main (){

    int matriz[DIM][DIM];
    int linha, coluna, traco=0;

    //escrevendo na Matriz
    for(linha = 0 ; linha < DIM ; linha++)
        for(coluna = 0 ; coluna < DIM ; coluna++)
        {
            printf("Elemento [%d][%d]: ", linha+1, coluna+1);
            scanf("%d", &matriz[linha][coluna]);
        }

    // imprimindo a matriz na tela
    for(linha = 0 ; linha < DIM ; linha++)
    {
        for(coluna = 0 ; coluna < DIM ; coluna++)
            printf("%3d", matriz[linha][coluna]);

        traco += matriz[linha][linha];
        printf("\n"); //após cada linha ser impressa, um salto de linha
    }

    printf("\nO valor do traco e: %d\n", traco);

return 0;
}

