#include <stdio.h>
#include <stdlib.h>

int main (){

    int matriz[3][3], vetorL[3], vetorC[3], testaL=0, testaC=0;
    int linha, coluna, i, somadp=0,somads=0;

    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            printf("Informe o elemento [%d][%d]", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);
        }
    printf("\n");
    }

    //Diagonal Principal
    for(linha=0;linha<3;linha++){
            somadp+=matriz[linha][linha];
        }

    //Diagonal Secundaria
    for(coluna=0;coluna<3;coluna++){
            somads+=matriz[coluna][3-i-1];
    }

    printf("\nSomando as linhas:\n");
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
			vetorL[linha] += matriz[linha][coluna];
		}
    }

    printf("\nSomando as colunas:\n");
    for(linha=0;linha<3;linha++){
        for(coluna=0;coluna<3;coluna++){
            vetorC[coluna] += matriz[linha][coluna];
        }
    }

    printf("\nSomando Diagonal Principal e Secundaria\n");
        for (i=0;i<3;i++){
            if (vetorL[i] != vetorL[i-1]){
                testaL=1;
            }else if (vetorC[i] != vetorC[i]){
                testaC=1;
                }
        }

    if (testaL && testaC && somadp == somads && somadp = vetorL[0]){

    }

return 0;
}

