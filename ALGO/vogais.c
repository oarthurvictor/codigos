#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main (){

    char palavra [40] = "casaco";
    int i, tam, contvogal=0;

    tam = strlen (palavra); /* Transforma o tamanho da variavel no numero de letras contidas */
    strupr(palavra);  //strupr -> a variavel fica em caixa alta  ||  strlwr -> a variavel fica em caixa baixa

    for (i=0;i<tam;i++){
        char letra = palavra[i];
        if ((letra=='A') || (letra=='E') || (letra=='I') || (letra=='O') || (letra=='U'))

        contvogal++;

    }//fimfor
    printf("A palavra %s possui %d vogais\n", palavra, contvogal);

return 0;
}
